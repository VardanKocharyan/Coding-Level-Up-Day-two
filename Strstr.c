#include <stdio.h>

char* strstr( const char* str, const char* substr ){
		const char* p = str;
		const char* pstr = substr;

		while (p && pstr) { 
			if ( Strcmp(p, pstr) == 0) {
				++p;
				pstr = substr;
			}

		}
}
