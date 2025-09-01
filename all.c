#include <stdio.h>
#include <stddef.h>  //size_t ('-')

void *Memchr(const void *ptr, int ch, size_t count) {
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char target = (unsigned char)ch;

    for(size_t i = 0; i < count; ++i) {
        if (p[i] == target) return (void *)&p[i];
    }
    return NULL;
}

int Memcmp(const void *lhs, const void *rhs, size_t count) {
    const unsigned char *p1 = (const unsigned char *)lhs;
    const unsigned char *p2 = (const unsigned char *)rhs;

    for(size_t i = 0; i < count; ++i){
        if (p1[i] != p2[i]) return (int)p1[i] - (int)p2[i];
    }
    return 0;
}

void *Memcpy(void *dest, const void *src, size_t count) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    for (size_t i = 0; i < count; ++i) {
        d[i] = s[i];
    }

    return dest;
}

void *Memmove(void *dest, const void *src, size_t count) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || count == 0) {
        return dest;
    }

    if (d < s) {
        for(size_t i = 0; i < count; ++i) {
            d[i] = s[i];
        }
    } 
	else {
        for(size_t i = count; i > 0; --i) {
            d[i - 1] = s[i - 1];
        }
    }

    return dest;
}

void *Memset(void *dest, int ch, size_t count) {
    unsigned char *p = (unsigned char *)dest;
    unsigned char value = (unsigned char)ch;

    for (size_t i = 0; i < count; ++i) {
        p[i] = value;
    }

    return dest;
}

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

const char* Strchr(const char* str, int ch) {
		char chr = (char)ch;
		while (*str && (*str != ch)) ++str;

		return (*str == ch) ? str : NULL;
}

int Strcmp( const char* lhs, const char* rhs ) {
		while (*lhs && *rhs) {
			if (*lhs != *rhs) break;
			++lhs;
			++rhs;
		}
		return (int)(*lhs - *rhs);
}

char* Strcpy(char *dest, const char *src) {
    char *ptr = dest;
    
    while(*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';
    
    return ptr;
}

size_t Strcspn(const char *dest, const char *src) {
    size_t count = 0;

    while(*dest) {
        const char *s = src;
        int found = 0;

        while(*s) {
            if (*dest == *s) {
                found = 1;
                break;
            }
            ++s;
        }

        if (found) {
            break;
        }

        ++count;
        ++dest;
    }

    return count;
}

unsigned int Strlen (int * p) {
		int *ptr = p;

		while (*ptr){
			++ptr;
		}
		return (unsigned int)(ptr - p);
}

char* Strpbrk(const char *dest, const char *breakset) {
    while(*dest) {
        const char *b = breakset;

        while(*b) {
            if (*dest == *b) {
                return (char *)dest;
            }
            ++b;
        }

        ++dest;
    }
    return NULL;
}

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

char *Strrev(char *str) {
    if(str == NULL) return NULL;

    size_t len = Strlen(str);
    size_t i = 0; 
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

size_t Strspn(const char* dest, const char* src) {
    size_t count = 0;

    while(*dest) {
        const char* s = src;
        int found = 0;

        while(*s) {
            if (*dest == *s) {
                found = 1;
                break;
            }
            ++s;
        }

        if (!found) {
            break;
        }

        ++count;
        ++dest;
    }

    return count;
}

char* Strstr( const char* str, const char* substr ){
		const char* p = str;
		const char* pstr = substr;

		while (p && pstr) { 
			if (Strcmp(p, pstr) == 0) {
				++p;
				pstr = substr;
			}

		}
}

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
