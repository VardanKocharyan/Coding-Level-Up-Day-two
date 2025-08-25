#include <stdio.h>
const char* Strrchr(const char* str, int ch) {
	char chr = (char)ch;
	const char*p = NULL;

	while (*str) {
		if (*str == chr) p = str;
		++str;
	}

	if (chr == '\0') return str;

	return p;
}
