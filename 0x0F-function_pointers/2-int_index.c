#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - good
 * @array: good
 * @size: good
 * @cmp: good
 * Return: (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}

