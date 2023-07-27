#include <stdio.h>
#include "main.h"
/**
 * *_strcat - good
 * @dest: good
 * @src: good
 * Return: (0)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
       	return dest;
}

