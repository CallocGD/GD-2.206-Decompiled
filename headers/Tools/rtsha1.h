#ifndef __RTSHA1_H__
#define __RTSHA1_H__

/* Source Code Was discovered by Acuroso */

namespace rtsha1{
    void calc(void const* password, int password_size, unsigned char* hash);
    void toHexString(const char unsigned *_in, char *out);
}

#endif // __RTSHA1_H__