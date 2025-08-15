#include <stdio.h>
#include "my_string.h"
#include <string.h>
#define SIZE 100

int main(void) {
/*
	puts("	STRLEN:\n");
	char str[SIZE];
	puts ("Enter a String , please.");
	fgets (str, SIZE, stdin);
	unsigned int len = Strlen (str);
	printf ("str len is %u\n\n", len);
*/

/*	puts("	STRCPY:\n");
	char source[SIZE] = {};
	char dest[SIZE] = {};
	puts("Enter a String for copy, please.");
	fgets(source, SIZE, stdin);
	Strcpy(dest, source);
	puts(dest);
*/

	/*
	puts("	STRCAT:\n");
	char str1[SIZE] = {};
	char str2[SIZE] = {};
	puts("Enter str1");
	fgets(str1, SIZE, stdin);
	puts("Enter str2:");
	fgets(str2, SIZE, stdin);
	Strcat(str1, str2);
	puts(str1);
*/

/*
	puts("	STRCMP\n");
	char str1[SIZE] = "hello";
	char str2[SIZE] = "hello";
	printf(" strcmp - %d\n", strcmp(str1, str2));
	printf("my Strcmpv %d\n" , Strcmp(str1, str2));
*/

/*
	puts("	STRCHR\n");
	char str[SIZE];
	puts("Enter the text: ");
	fgets(str, SIZE, stdin);
	char target = '\0';
	puts("Enter target:");
	scanf(" %c", &target);
	const char* res = str;

	while ((res = Strchr(res, target)) != NULL){
			printf("Found '%c' starting at '%s'\n", target, str);
			++res;
	}
*/

	puts("	STRRCHR\n");
	char str[SIZE];
	puts("Enter the text: ");
	fgets(str, SIZE, stdin);
	char target = '\0';
	puts("Enter target:");
	scanf(" %c", &target);
	printf("Strrchr %s" , Strrchr(str, target));

	return 0;
}
