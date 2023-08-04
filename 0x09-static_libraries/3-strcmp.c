#include <stdio.h>
#include "main.h"
/**
 *  _strcmp - good
 * @s1: good
 * @s2: good
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

