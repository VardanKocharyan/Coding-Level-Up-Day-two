#ifndef MY_STRING_H
#define MY_STRING_H

unsigned int Strlen (char *);
char* Strcpy (char* , const char* );
char* Strcat (char*, const char* );
int Strcmp( const char* , const char* );
const char* Strchr( const char* , int );
const char* Strrchr(const char*, int );
char* strstr( const char* str, const char* substr );
size_t Strspn(const char* dest, const char* src);
size_t Strcspn(const char *dest, const char *src);
char *Strpbrk(const char *dest, const char *breakset);
void *Memcpy(void *dest, const void *src, size_t count);
void *Memmove(void *dest, const void *src, size_t count);
int Memcmp(const void *lhs, const void *rhs, size_t count);
void *Memchr(const void *ptr, int ch, size_t count); 
void *Memset(void *dest, int ch, size_t count); 
char *Strrev(char *str);
char* trim(char *str); 

#endif
