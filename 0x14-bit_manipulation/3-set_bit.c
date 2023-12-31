#include <stdio.h>
#include "main.h"
/**
 * set_bit - good
 * @n: good
 * @index: good
 * Return: (0)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}

