#include <stdio.h>

char* Strcat ( char* dest, const char* src) {
	char* d = dest;
	while (*d){
		++d;
	}
	while (*src){
		*d = *src;
		++d;
		++src;
	}
	d = '\0';

	return dest;
}
