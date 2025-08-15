#include <stdio.h>

const char* Strchr(const char* str, int ch) {
		char chr = (char)ch;
		while (*str && (*str != ch)) ++str;

		return (*str == ch) ? str : NULL;
}
