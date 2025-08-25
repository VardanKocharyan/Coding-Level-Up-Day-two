#include <stdio.h>
#include <stddef.h>  //size_t ('-')

void *Memchr(const void *ptr, int ch, size_t count) {
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char target = (unsigned char)ch;

    for(size_t i = 0; i < count; ++i) {
        if (p[i] == target) return (void *)&p[i];
    }
    return NULL;
}
