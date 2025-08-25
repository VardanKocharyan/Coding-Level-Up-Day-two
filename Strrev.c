#include <stdio.h>
#include "my_string.h"

char *Strrev(char *str) {
    if(str == NULL) return NULL;

    size_t len = Strlen(str);
    size_t i = 0, 
	size_t j = len - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        ++i;
        --j;
    }

    return str;
}
