#include <stdio.h>
#include "my_string.h"

int main(void) {
	char str1[50] = "Hello";
    char str2[50] = "World";

    printf("Length of str1 = %d\n", Strlen(str1));
    Strcpy(str1, str2);
    printf("After copy, str1 = %s\n", str1);
    printf("Compare str1 and str2 = %d\n", Strcmp(str1, str2));

    return 0;
}
