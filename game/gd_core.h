/*
 * Geometry Dash for Derka — ядро игры.
 * Чистый C99, ноль зависимостей: ни Android, ни OpenGL, ни libc-заголовков.
 * Собирается и проверяется на хосте:  gcc -std=c99 -DGD_SIM game/gd_core.c -lm
 */
#ifndef GD_CORE_H
#define GD_CORE_H

#define GD_MAX_OBJ  1024   /* объектов в уровне */
#define GD_MAX_PART   24   /* осколков при смерти */

/* типы объектов */
enum { GD_SPIKE, GD_BLOCK, GD_FINISH };
/* фазы игры */
enum { GD_TITLE, GD_PLAY, GD_DEAD, GD_WIN };

typedef struct { float x, y, w, h; unsigned char t; } GDObj;
typedef struct { float x, y, vx, vy, r, life; }       GDPart;

typedef struct {
  GDObj  o[GD_MAX_OBJ];
  GDPart p[GD_MAX_PART];
  int    n, np;

  float  px, py, vy, rot;   /* куб: px — центр, py — низ */
  float  camx, shake, acc, deadt, t;
  float  len;               /* длина уровня в блоках */

  int    phase, hold, ground, attempt, best, jumps;
  unsigned rng;
} GDGame;

void  gd_init(GDGame *g);        /* построить уровень (детерминированно) */
void  gd_go(GDGame *g);          /* новая попытка */
void  gd_press(GDGame *g);       /* палец/клавиша вниз */
void  gd_release(GDGame *g);     /* отпустили */
void  gd_update(GDGame *g, float dt);
float gd_prog(const GDGame *g);  /* прогресс 0..1 */

#endif
