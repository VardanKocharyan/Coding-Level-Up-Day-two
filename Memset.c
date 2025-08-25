#include <stdio.h>
#include <stddef.h>  //size_t ('-')

void *Memset(void *dest, int ch, size_t count) {
    unsigned char *p = (unsigned char *)dest;
    unsigned char value = (unsigned char)ch;

    for (size_t i = 0; i < count; ++i) {
        p[i] = value;
    }

    return dest;
}
