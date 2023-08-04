#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - good
 * @s: good
 * @accept: good
 * Return: (0)
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = strpbrk(s, accept);
	return (a);
}

