#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - good
 * @s1: good
 * @s2: good
 * Return: (0)
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int size1, size2;
	int i, j;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	a = malloc(size1 + size2 + 1);
	if (a == NULL)
		return ("");
	for (i = 0; i < size1; i++)
		a[i] = s1[i];
	for (j = 0; j < size2; j++)
		a[i + j] = s2[j];
	return (a);
}

