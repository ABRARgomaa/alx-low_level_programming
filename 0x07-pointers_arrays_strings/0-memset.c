#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_memset - good
 * @s: good
 * @b: good
 * @n: good
 * Return: (0)
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
