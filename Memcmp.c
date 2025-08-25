#include <stdio.h>
#include <stddef.h>  // for size_t

int Memcmp(const void *lhs, const void *rhs, size_t count) {
    const unsigned char *p1 = (const unsigned char *)lhs;
    const unsigned char *p2 = (const unsigned char *)rhs;

    for(size_t i = 0; i < count; ++i){
        if (p1[i] != p2[i]) return (int)p1[i] - (int)p2[i];
    }
    return 0;
}
