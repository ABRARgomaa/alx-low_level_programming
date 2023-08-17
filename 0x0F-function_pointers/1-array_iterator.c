#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - good
 * @array: good
 * @size: good
 * @action: good
 * Return: (0)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}

