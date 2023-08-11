#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - good
 * @s1: good
 * @s2: good
 * @n: good
 * Return: (0)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a2, i, m;
	char *huh;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	a1 = strlen(s1);
	a2 = strlen(s2);
	if (n >= a2)
		n = a2;
	huh = malloc(sizeof(char) * (n + a1 + 1));
	if (huh ==  NULL)
		return (NULL);
	for (i = 0; i < a1; i++)
		huh[i] = s1[i];
	for (m = 0; m < n; m++)
		huh[i + m] = s2[m];
	huh[i + m] = '\0';
	return (huh);
}

