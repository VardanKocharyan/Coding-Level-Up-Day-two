#include <stdio.h>
#include <stddef.h>  //size_t

void *Memcpy(void *dest, const void *src, size_t count) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    for (size_t i = 0; i < count; ++i) {
        d[i] = s[i];
    }

    return dest;
}
