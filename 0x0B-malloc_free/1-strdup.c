#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - good
 * @str: good
 * Return: (0)
 */
char *_strdup(char *str)
{
	int size;
	int m;
	char *a;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	a = malloc(size * sizeof(*str) + 1);
	if (a == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		a[m] = str[m];
	return (a);
}

