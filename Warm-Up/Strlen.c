#include <stdio.h>

unsigned int Strlen (int * p) {
		int *ptr = p;

		while (*ptr){
			++ptr;
		}
		return (unsigned int)(ptr - p);
}
