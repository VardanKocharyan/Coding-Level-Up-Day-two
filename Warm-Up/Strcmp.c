#include <stdio.h>

int Strcmp( const char* lhs, const char* rhs ) {
		while (*lhs && *rhs) {
			if (*lhs != *rhs) break;
			++lhs;
			++rhs;
		}
		return (*lhs - *rhs);
}
