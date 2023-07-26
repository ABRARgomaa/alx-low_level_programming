#include <stdio.h>
#include "main.h"
/**
 * *_strncat - good
 * @dest: good
 * @src: good
 * @n: good
 * Return: (0)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return dest;
}

