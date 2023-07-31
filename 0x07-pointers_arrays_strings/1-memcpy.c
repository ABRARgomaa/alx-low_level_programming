#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_memcpy - good
 * @dest: good
 * @src: good
 * @n: good
 * Return: (0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy (dest, src, n);
	return (dest);
}

