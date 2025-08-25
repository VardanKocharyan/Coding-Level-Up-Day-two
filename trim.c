#include <stdio.h>
#include "my_string.h"

char* trim(char *str) {
    if (str == NULL) return NULL;

    char *start = str;
    char *end;

    while(*start == ' ' || *start == '\t' || *start == '\n' || *start == '\r' || *start == '\f' || *start == '\v') {
        ++start;
    }

    if (*start == '\0') {
        str[0] = '\0';
        return str;
    }

    end = start + Strlen(start) - 1;

    while (end > start && (*end == ' ' || *end == '\t' || *end == '\n' || *end == '\r' || *end == '\f' || *end == '\v')) {
        --end;
    }

    *(end + 1) = '\0';

    if (start != str) {
        Memmove(str, start, end - start + 2);
    }

    return str;
}
