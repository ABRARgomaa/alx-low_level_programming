#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strstr - good
 * @haystack: good
 * @needle: good
 * Return: (0)
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;

	a = strstr(haystack, needle);
	return (a);
}

