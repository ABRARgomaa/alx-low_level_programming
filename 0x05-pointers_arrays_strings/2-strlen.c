#include <stdio.h>
#include "main.h"
/**
 * _strlen - good
 * @s: good
 * Return: (0)
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;
	return (len);
}
