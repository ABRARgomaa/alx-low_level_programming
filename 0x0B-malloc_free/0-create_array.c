#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - good
 * @size: good
 * @c: good
 * Return: (0)
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}

