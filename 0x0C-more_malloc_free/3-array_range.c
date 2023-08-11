#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - good
 * @min: good
 * @max: good
 * Return: (0)
 */
int *array_range(int min, int max)
{
	int *a;
	int n1;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (n1 = 0; n1 <= max - min; n1++)
	{
		a[n1] = min + n1;
	}

	return (a);
}

