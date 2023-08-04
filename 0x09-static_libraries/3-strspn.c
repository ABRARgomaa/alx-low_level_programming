#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - good
 * @s: good
 * @accept: good
 * Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = strspn(s, accept);
	return (n);
}

