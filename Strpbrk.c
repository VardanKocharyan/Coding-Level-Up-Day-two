#include <stdio.h>

char* Strpbrk(const char *dest, const char *breakset) {
    while(*dest) {
        const char *b = breakset;

        while(*b) {
            if (*dest == *b) {
                return (char *)dest;
            }
            ++b;
        }

        ++dest;
    }
    return NULL;
}
