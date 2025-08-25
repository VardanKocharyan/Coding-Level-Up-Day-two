#include <stdio.h>

size_t Strcspn(const char *dest, const char *src) {
    size_t count = 0;

    while(*dest) {
        const char *s = src;
        int found = 0;

        while(*s) {
            if (*dest == *s) {
                found = 1;
                break;
            }
            ++s;
        }

        if (found) {
            break;
        }

        ++count;
        ++dest;
    }

    return count;
}
