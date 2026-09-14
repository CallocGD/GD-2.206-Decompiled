/*
 * Geometry Dash for Derka — оболочка под Android: EGL + OpenGL ES 2 + native_app_glue.
 * Ассетов нет вообще: вся картинка рисуется процедурно, кадр уходит одним glDrawArrays.
 */
#include <android_native_app_glue.h>
#include <android/log.h>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "gd_core.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "gdderka", __VA_ARGS__))
#define MAXV    12288     /* вершин на кадр: сцена + текст, с запасом */
#define VIEW_H  9.0f      /* сколько блоков видно по вертикали */
#define PI      3.14159265f

typedef struct { float r, g, b, a; } C;
typedef struct { float x, y, r, g, b, a; } V;

typedef struct {
  struct android_app *app;
  EGLDisplay dpy;
  EGLSurface surf;
  EGLContext ctx;
  GLuint prog, vbo;
  int ready, anim, W, H, logged;
  double last;
  GDGame g;
} Eng;

static V vb[MAXV];
static int vn;
static int gW, gH;                /* размер окна в пикселях */
static float SC, GY, CX;          /* пикселей в блоке, Y линии земли, X камеры */

/* ------------------------------------------------------- шрифт 3x5 (A-Z 0-9 и знаки) */
static const char *FONT[] = {
  ".#." "#.#" "###" "#.#" "#.#",  /* A */  "###" "#.#" "##." "#.#" "##.",  /* B */
  "###" "#.." "#.." "#.." "###",  /* C */  "##." "#.#" "#.#" "#.#" "##.",  /* D */
  "###" "#.." "##." "#.." "###",  /* E */  "###" "#.." "##." "#.." "#..",  /* F */
  "###" "#.." "#.#" "#.#" "###",  /* G */  "#.#" "#.#" "###" "#.#" "#.#",  /* H */
  "###" ".#." ".#." ".#." "###",  /* I */  "..#" "..#" "..#" "#.#" "###",  /* J */
  "#.#" "#.#" "##." "#.#" "#.#",  /* K */  "#.." "#.." "#.." "#.." "###",  /* L */
  "#.#" "###" "#.#" "#.#" "#.#",  /* M */  "##." "#.#" "#.#" "#.#" "#.#",  /* N */
  "###" "#.#" "#.#" "#.#" "###",  /* O */  "###" "#.#" "###" "#.." "#..",  /* P */
  "###" "#.#" "#.#" "###" "..#",  /* Q */  "###" "#.#" "###" "#.#" "#.#",  /* R */
  "###" "#.." "###" "..#" "###",  /* S */  "###" ".#." ".#." ".#." ".#.",  /* T */
  "#.#" "#.#" "#.#" "#.#" "###",  /* U */  "#.#" "#.#" "#.#" "#.#" ".#.",  /* V */
  "#.#" "#.#" "###" "###" "#.#",  /* W */  "#.#" "#.#" ".#." "#.#" "#.#",  /* X */
  "#.#" "#.#" ".#." ".#." ".#.",  /* Y */  "###" "..#" ".#." "#.." "###",  /* Z */
  "###" "#.#" "#.#" "#.#" "###",  /* 0 */  ".#." "##." ".#." ".#." "###",  /* 1 */
  "###" "..#" "###" "#.." "###",  /* 2 */  "###" "..#" "###" "..#" "###",  /* 3 */
  "#.#" "#.#" "###" "..#" "..#",  /* 4 */  "###" "#.." "###" "..#" "###",  /* 5 */
  "###" "#.." "###" "#.#" "###",  /* 6 */  "###" "..#" "..#" "..#" "..#",  /* 7 */
  "###" "#.#" "###" "#.#" "###",  /* 8 */  "###" "#.#" "###" "..#" "###",  /* 9 */
  "..." "..." "..." "..." "...",  /*   */  "#.#" "..#" ".#." "#.." "#.#",  /* % */
  ".#." ".#." ".#." "..." ".#.",  /* ! */  "..." "..." "..." "..." ".#.",  /* . */
  "..." ".#." "..." ".#." "...",  /* : */  "..." "..." "###" "..." "...",  /* - */
};

static int fidx(int c)
{
  if (c >= 'a' && c <= 'z') c -= 32;
  if (c >= 'A' && c <= 'Z') return c - 'A';
  if (c >= '0' && c <= '9') return 26 + c - '0';
  switch (c) {
    case '%': return 37; case '!': return 38; case '.': return 39;
    case ':': return 40; case '-': return 41;
  }
  return 36;                                    /* пробел и всё прочее */
}

/* ------------------------------------------------------------- примитивы */

static C C4(float r, float g, float b, float a) { C c; c.r = r; c.g = g; c.b = b; c.a = a; return c; }

static C mix(C a, C b, float t)
{
  return C4(a.r + (b.r - a.r) * t, a.g + (b.g - a.g) * t,
            a.b + (b.b - a.b) * t, a.a + (b.a - a.a) * t);
}

/* координаты в пикселях, начало в левом нижнем углу */
static void vp(float x, float y, C c)
{
  if (vn >= MAXV) return;
  vb[vn].x = x / (0.5f * gW) - 1.0f;
  vb[vn].y = y / (0.5f * gH) - 1.0f;
  vb[vn].r = c.r; vb[vn].g = c.g; vb[vn].b = c.b; vb[vn].a = c.a;
  vn++;
}

static void tri(float x0, float y0, float x1, float y1, float x2, float y2, C c)
{
  vp(x0, y0, c); vp(x1, y1, c); vp(x2, y2, c);
}

static void quad(float x, float y, float w, float h, C c)
{
  tri(x, y, x + w, y, x + w, y + h, c);
  tri(x, y, x + w, y + h, x, y + h, c);
}

static void q4(float x0, float y0, float x1, float y1,
               float x2, float y2, float x3, float y3, C c)
{
  tri(x0, y0, x1, y1, x2, y2, c);
  tri(x0, y0, x2, y2, x3, y3, c);
}

static void vgrad(float x, float y, float w, float h, C bot, C top)
{
  vp(x, y, bot); vp(x + w, y, bot); vp(x + w, y + h, top);
  vp(x, y, bot); vp(x + w, y + h, top); vp(x, y + h, top);
}

/* мировые координаты: X в блоках от камеры, Y в блоках от земли */
static float PXf(float wx) { return (wx - CX) * SC; }
static float PYf(float wy) { return GY + wy * SC; }

static void wquad(float wx, float wy, float ww, float wh, C c)
{
  quad(PXf(wx), PYf(wy), ww * SC, wh * SC, c);
}

static void wtri(float x0, float y0, float x1, float y1, float x2, float y2, C c)
{
  tri(PXf(x0), PYf(y0), PXf(x1), PYf(y1), PXf(x2), PYf(y2), c);
}

/* повёрнутый квадрат в мире: центр, размер, угол в градусах */
static void rq(float cx, float cy, float s, float ang, C c)
{
  float r = s * SC * 0.5f, a = ang * PI / 180.0f;
  float co = cosf(a) * r, si = sinf(a) * r;
  float x = PXf(cx), y = PYf(cy);
  q4(x - co + si, y - si - co, x + co + si, y + si - co,
     x + co - si, y + si + co, x - co - si, y - si + co, c);
}

static int slen(const char *s) { int n = 0; while (s[n]) n++; return n; }

static float tadv(float sz) { return sz * 0.8f; }          /* шаг между буквами */

/* строка по центру cx, низ букв на y, высота буквы sz */
static void text(const char *s, float cx, float y, float sz, C c)
{
  float u = sz / 5.0f, adv = tadv(sz);
  float x = cx - adv * slen(s) * 0.5f;
  int i, r, k;

  for (i = 0; s[i]; i++, x += adv) {
    const char *g = FONT[fidx((unsigned char)s[i])];
    for (r = 0; r < 5; r++)
      for (k = 0; k < 3; k++)
        if (g[r * 3 + k] == '#') quad(x + k * u, y + (4 - r) * u, u + 0.5f, u + 0.5f, c);
  }
}

static void textsh(const char *s, float cx, float y, float sz, C c)
{
  text(s, cx + sz * 0.12f, y - sz * 0.12f, sz, C4(0.0f, 0.0f, 0.0f, 0.45f));
  text(s, cx, y, sz, c);
}

/* ---------------------------------------------------------------- кадр */

static void render(Eng *e)
{
  GDGame *g = &e->g;
  float prog = gd_prog(g);
  float t = g->t;
  char buf[32];
  int i;

  C sky0 = mix(C4(0.04f, 0.07f, 0.22f, 1), C4(0.26f, 0.05f, 0.28f, 1), prog);
  C sky1 = mix(C4(0.09f, 0.20f, 0.46f, 1), C4(0.55f, 0.13f, 0.33f, 1), prog);
  C acc  = mix(C4(0.30f, 0.90f, 1.00f, 1), C4(1.00f, 0.70f, 0.25f, 1), prog);
  C grid = C4(1, 1, 1, 0.06f);
  C blk  = C4(0.11f, 0.15f, 0.33f, 1);
  C blk2 = mix(C4(0.45f, 0.85f, 1.00f, 1), C4(1.00f, 0.80f, 0.40f, 1), prog);
  C spk  = C4(0.88f, 0.93f, 1.00f, 1);
  C spk2 = C4(0.09f, 0.12f, 0.26f, 1);
  float x0, x1, par, wx, wy, u;

  SC = (float)e->H / VIEW_H;
  GY = (float)e->H * 0.28f;
  CX = g->camx;
  if (g->shake > 0.0f) {
    CX += sinf(t * 97.0f) * 0.20f * g->shake;
    GY += cosf(t * 83.0f) * 11.0f * g->shake;
  }
  x0 = CX - 1.0f;
  x1 = CX + (float)e->W / SC + 1.0f;

  vn = 0;

  /* небо + фоновая сетка с параллаксом */
  vgrad(0, 0, (float)e->W, (float)e->H, sky0, sky1);
  par = CX * 0.5f;
  for (wx = floorf(par * 0.5f) * 2.0f; wx < par + e->W / SC + 2.0f; wx += 2.0f)
    quad((wx - par) * SC, 0, 2.0f, (float)e->H, grid);
  for (wy = 0.0f; wy < VIEW_H; wy += 2.0f)
    quad(0, GY + wy * SC, (float)e->W, 2.0f, grid);

  /* земля */
  quad(0, 0, (float)e->W, GY, C4(0.03f, 0.05f, 0.13f, 1));
  for (wx = floorf(CX); wx < x1; wx += 1.0f)
    quad(PXf(wx), 0, 2.0f, GY, grid);
  for (wy = -1.0f; wy > -VIEW_H * 0.4f; wy -= 1.0f)
    quad(0, PYf(wy), (float)e->W, 2.0f, grid);
  quad(0, GY - 4.0f, (float)e->W, 5.0f, acc);

  /* объекты уровня */
  for (i = 0; i < g->n; i++) {
    GDObj *o = &g->o[i];
    if (o->x > x1) break;
    if (o->x + o->w < x0) continue;

    if (o->t == GD_SPIKE) {
      wtri(o->x, o->y, o->x + o->w, o->y, o->x + o->w * 0.5f, o->y + o->h, spk);
      wtri(o->x + o->w * 0.22f, o->y, o->x + o->w * 0.78f, o->y,
           o->x + o->w * 0.5f, o->y + o->h * 0.72f, spk2);
    } else if (o->t == GD_BLOCK) {
      wquad(o->x, o->y, o->w, o->h, blk);
      u = 3.0f / SC;
      wquad(o->x + u, o->y + u, o->w - 2 * u, o->h - 2 * u, blk2);
      wquad(o->x + u * 2.5f, o->y + u * 2.5f, o->w - u * 5, o->h - u * 5, blk);
    } else {                                    /* финиш: клетчатая стена */
      int r2, c2;
      for (r2 = 0; r2 < 12; r2++)
        for (c2 = 0; c2 < 2; c2++)
          wquad(o->x + c2 * 0.5f, o->y + r2 * 0.5f, 0.5f, 0.5f,
                ((r2 + c2) & 1) ? C4(0.95f, 0.95f, 0.95f, 1) : C4(0.10f, 0.10f, 0.14f, 1));
    }
  }

  /* куб и осколки */
  if (g->phase == GD_PLAY || g->phase == GD_WIN) {
    C body = mix(C4(0.16f, 0.95f, 0.50f, 1), C4(0.95f, 0.80f, 0.20f, 1), prog);
    rq(g->px, g->py + 0.45f, 0.92f, g->rot, body);
    rq(g->px, g->py + 0.45f, 0.62f, g->rot, C4(0.05f, 0.25f, 0.14f, 1));
    rq(g->px, g->py + 0.45f, 0.30f, g->rot, body);
    /* глаза: две точки на «лице» куба */
    {
      float a = g->rot * PI / 180.0f, co = cosf(a), si = sinf(a);
      int k;
      for (k = 0; k < 2; k++) {                  /* глаза на «лице» куба */
        float lx = k ? 0.17f : -0.17f, ly = 0.13f;
        rq(g->px + lx * co - ly * si, g->py + 0.45f + lx * si + ly * co,
           0.13f, g->rot, C4(1, 1, 1, 1));
      }
    }
  }
  for (i = 0; i < g->np; i++) {
    GDPart *p = &g->p[i];
    if (p->life <= 0.0f) continue;
    rq(p->x, p->y, p->r * 2.0f, p->life * 720.0f,
       C4(0.20f, 0.95f, 0.55f, p->life > 1.0f ? 1.0f : p->life));
  }

  /* ---------------------------------------------------------------- HUD */
  {
    float bw = e->W * 0.34f, bx = (e->W - bw) * 0.5f, by = e->H - e->H * 0.055f;
    quad(bx - 2, by - 2, bw + 4, e->H * 0.011f + 4, C4(0, 0, 0, 0.35f));
    quad(bx, by, bw, e->H * 0.011f, C4(1, 1, 1, 0.20f));
    quad(bx, by, bw * prog, e->H * 0.011f, acc);
    quad(bx + bw * prog - 4, by - 4, 8, e->H * 0.011f + 8, C4(1, 1, 1, 0.9f));

    sprintf(buf, "%d%%", (int)(prog * 100.0f));
    textsh(buf, bx + bw * 0.5f, by + e->H * 0.026f, e->H * 0.030f, C4(1, 1, 1, 1));

    sprintf(buf, "ATTEMPT %d", g->attempt > 0 ? g->attempt : 1);
    text(buf, e->H * 0.028f * 0.4f * slen(buf) + e->W * 0.02f, e->H * 0.05f,
         e->H * 0.028f, C4(1, 1, 1, 0.85f));

    sprintf(buf, "BEST %d%%", g->best);
    text(buf, e->W - e->H * 0.028f * 0.4f * slen(buf) - e->W * 0.02f, e->H * 0.05f,
         e->H * 0.028f, C4(1, 1, 1, 0.85f));
  }

  if (g->phase == GD_TITLE || g->phase == GD_WIN) {
    const char *l1 = g->phase == GD_TITLE ? "GEOMETRY DASH" : "LEVEL COMPLETE!";
    const char *l2 = g->phase == GD_TITLE ? "FOR DERKA" : "100 PERCENT";
    const char *l3 = g->phase == GD_TITLE ? "TAP TO START" : "TAP TO RESTART";
    float cy = e->H * 0.62f;

    quad(0, 0, (float)e->W, (float)e->H, C4(0, 0, 0, 0.45f));
    textsh(l1, e->W * 0.5f, cy + e->H * 0.16f, e->H * 0.075f, acc);
    textsh(l2, e->W * 0.5f, cy + e->H * 0.06f, e->H * 0.105f, C4(1, 1, 1, 1));
    if (fmodf(t, 1.2f) < 0.8f)
      textsh(l3, e->W * 0.5f, cy - e->H * 0.08f, e->H * 0.045f, C4(0.85f, 0.95f, 1.0f, 1));
    sprintf(buf, "BEST %d%%   JUMPS %d", g->best, g->jumps);
    textsh(buf, e->W * 0.5f, cy - e->H * 0.15f, e->H * 0.032f, C4(1, 1, 1, 0.75f));
  }

  if (g->phase == GD_DEAD && g->deadt < 0.25f)
    quad(0, 0, (float)e->W, (float)e->H, C4(1, 1, 1, 0.55f * (1.0f - g->deadt / 0.25f)));
}

/* ------------------------------------------------------------ EGL / GLES */

static const char *VSRC =
  "attribute vec2 a_p; attribute vec4 a_c; varying vec4 v_c;"
  "void main(){ gl_Position = vec4(a_p, 0.0, 1.0); v_c = a_c; }";
static const char *FSRC =
  "precision mediump float; varying vec4 v_c; void main(){ gl_FragColor = v_c; }";

static GLuint shader(GLenum type, const char *src)
{
  GLuint s = glCreateShader(type);
  GLint ok;
  glShaderSource(s, 1, &src, NULL);
  glCompileShader(s);
  glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
  if (!ok) {
    char log[512];
    glGetShaderInfoLog(s, sizeof log, NULL, log);
    LOGI("shader: %s", log);
  }
  return s;
}

static void e_term(Eng *e);

static int e_init(Eng *e)
{
  EGLint cfgattr[] = {
    EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
    EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
    EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8, EGL_BLUE_SIZE, 8, EGL_ALPHA_SIZE, 8,
    EGL_DEPTH_SIZE, 0, EGL_NONE
  };
  EGLint ctxattr[] = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE };
  EGLint n = 0, w, h;
  EGLConfig cfg;
  GLint linked = 0;
  GLuint vs, fs;

  e->dpy = eglGetDisplay(EGL_DEFAULT_DISPLAY);
  if (e->dpy == EGL_NO_DISPLAY || !eglInitialize(e->dpy, NULL, NULL)) {
    LOGI("eglInitialize failed, err=0x%x", eglGetError()); e_term(e); return 0;
  }
  if (!eglChooseConfig(e->dpy, cfgattr, &cfg, 1, &n) || n < 1) {
    LOGI("eglChooseConfig failed, err=0x%x", eglGetError()); e_term(e); return 0;
  }

  e->surf = eglCreateWindowSurface(e->dpy, cfg, e->app->window, NULL);
  e->ctx = eglCreateContext(e->dpy, cfg, EGL_NO_CONTEXT, ctxattr);
  if (e->surf == EGL_NO_SURFACE || e->ctx == EGL_NO_CONTEXT) {
    LOGI("eglCreateWindowSurface/Context failed, err=0x%x", eglGetError());
    e_term(e); return 0;
  }
  if (!eglMakeCurrent(e->dpy, e->surf, e->surf, e->ctx)) {
    LOGI("eglMakeCurrent failed, err=0x%x", eglGetError()); e_term(e); return 0;
  }

  eglQuerySurface(e->dpy, e->surf, EGL_WIDTH, &w);
  eglQuerySurface(e->dpy, e->surf, EGL_HEIGHT, &h);
  e->W = w > 0 ? w : 1280;
  e->H = h > 0 ? h : 720;
  gW = e->W; gH = e->H;

  vs = shader(GL_VERTEX_SHADER, VSRC);
  fs = shader(GL_FRAGMENT_SHADER, FSRC);
  e->prog = glCreateProgram();
  glAttachShader(e->prog, vs);
  glAttachShader(e->prog, fs);
  glBindAttribLocation(e->prog, 0, "a_p");
  glBindAttribLocation(e->prog, 1, "a_c");
  glLinkProgram(e->prog);
  glGetProgramiv(e->prog, GL_LINK_STATUS, &linked);
  glDeleteShader(vs);
  glDeleteShader(fs);
  if (!linked) { LOGI("shader link failed"); e_term(e); return 0; }

  glUseProgram(e->prog);
  glGenBuffers(1, &e->vbo);
  glBindBuffer(GL_ARRAY_BUFFER, e->vbo);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(V), (void *)0);
  glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(V), (void *)(2 * sizeof(float)));

  glDisable(GL_DEPTH_TEST);
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glViewport(0, 0, e->W, e->H);
  LOGI("GL ready %dx%d", e->W, e->H);
  return 1;
}

static void e_term(Eng *e)
{
  if (e->dpy == EGL_NO_DISPLAY) return;
  eglMakeCurrent(e->dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
  if (e->prog) glDeleteProgram(e->prog);
  if (e->vbo) glDeleteBuffers(1, &e->vbo);
  if (e->surf != EGL_NO_SURFACE) eglDestroySurface(e->dpy, e->surf);
  if (e->ctx != EGL_NO_CONTEXT) eglDestroyContext(e->dpy, e->ctx);
  eglTerminate(e->dpy);
  e->dpy = EGL_NO_DISPLAY; e->surf = EGL_NO_SURFACE; e->ctx = EGL_NO_CONTEXT;
  e->prog = e->vbo = 0;
  e->ready = 0;
}

static void frame(Eng *e)
{
  double now;
  struct timespec ts;

  clock_gettime(CLOCK_MONOTONIC, &ts);
  now = ts.tv_sec + ts.tv_nsec * 1e-9;
  gd_update(&e->g, e->last ? (float)(now - e->last) : 0.016f);
  e->last = now;

  render(e);
  if (!e->logged) { e->logged = 1; LOGI("first frame: %d verts", vn); }
  glClearColor(0, 0, 0, 1);
  glClear(GL_COLOR_BUFFER_BIT);
  glBufferData(GL_ARRAY_BUFFER, vn * (GLsizeiptr)sizeof(V), vb, GL_STREAM_DRAW);
  glDrawArrays(GL_TRIANGLES, 0, vn);
  eglSwapBuffers(e->dpy, e->surf);
}

/* ---------------------------------------------------------------- ввод */

static int32_t on_input(struct android_app *app, AInputEvent *ev)
{
  Eng *e = (Eng *)app->userData;
  int32_t type = AInputEvent_getType(ev);

  if (type == AINPUT_EVENT_TYPE_MOTION) {
    int32_t a = AMotionEvent_getAction(ev) & AMOTION_EVENT_ACTION_MASK;
    if (a == AMOTION_EVENT_ACTION_DOWN || a == AMOTION_EVENT_ACTION_POINTER_DOWN)
      gd_press(&e->g);
    else if (a == AMOTION_EVENT_ACTION_UP || a == AMOTION_EVENT_ACTION_POINTER_UP ||
             a == AMOTION_EVENT_ACTION_CANCEL)
      gd_release(&e->g);
    return 1;
  }
  if (type == AINPUT_EVENT_TYPE_KEY) {
    int32_t kc = AKeyEvent_getKeyCode(ev);
    if (kc == AKEYCODE_SPACE || kc == AKEYCODE_ENTER || kc == AKEYCODE_DPAD_CENTER ||
        kc == AKEYCODE_DPAD_UP || kc == AKEYCODE_BUTTON_A || kc == AKEYCODE_W) {
      if (AKeyEvent_getAction(ev) == AKEY_EVENT_ACTION_DOWN) gd_press(&e->g);
      else gd_release(&e->g);
      return 1;
    }
  }
  return 0;
}

static void on_cmd(struct android_app *app, int32_t cmd)
{
  Eng *e = (Eng *)app->userData;

  switch (cmd) {
    case APP_CMD_INIT_WINDOW:
      LOGI("APP_CMD_INIT_WINDOW");
      e->ready = e_init(e);
      if (!e->ready) LOGI("EGL/GL init FAILED, eglGetError=0x%x", eglGetError());
      break;
    case APP_CMD_TERM_WINDOW:
      e_term(e);
      break;
    case APP_CMD_WINDOW_RESIZED:
      if (e->ready) {
        EGLint w, h;
        eglQuerySurface(e->dpy, e->surf, EGL_WIDTH, &w);
        eglQuerySurface(e->dpy, e->surf, EGL_HEIGHT, &h);
        if (w > 0 && h > 0) {                 /* guard от нулевого окна */
          e->W = w; e->H = h; gW = w; gH = h;
          glViewport(0, 0, w, h);
        }
      }
      break;
    case APP_CMD_GAINED_FOCUS:
    case APP_CMD_RESUME:
      e->anim = 1;
      break;
    case APP_CMD_LOST_FOCUS:
    case APP_CMD_PAUSE:
      e->anim = 0;
      gd_release(&e->g);
      break;
    case APP_CMD_DESTROY:
      e_term(e);
      break;
  }
}

void android_main(struct android_app *state)
{
  Eng e;
  int ident, events;
  struct android_poll_source *src;

  memset(&e, 0, sizeof e);
  e.app = state;
  e.dpy = EGL_NO_DISPLAY;
  e.surf = EGL_NO_SURFACE;
  e.ctx = EGL_NO_CONTEXT;
  state->userData = &e;
  state->onAppCmd = on_cmd;
  state->onInputEvent = on_input;

  LOGI("android_main: Geometry Dash for Derka starting");
  gd_init(&e.g);
  LOGI("level ready: %d objects, %.0f blocks", e.g.n, e.g.len);

  for (;;) {
    while ((ident = ALooper_pollAll(e.anim && e.ready ? 0 : -1, NULL, &events,
                                    (void **)&src)) >= 0) {
      if (src) src->process(state, src);
      if (state->destroyRequested) { e_term(&e); return; }
    }
    if (e.anim && e.ready) frame(&e);
  }
}
