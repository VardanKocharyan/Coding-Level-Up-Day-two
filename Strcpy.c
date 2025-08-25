#include <stdio.h>

char* Strcpy(char* d , const char* s) {
		char* dest = d;
		
		while (*s) {
			*dest = *s;
			++dest;
			++s;
		}

		*dest = '\0';
		
		return d;
}
