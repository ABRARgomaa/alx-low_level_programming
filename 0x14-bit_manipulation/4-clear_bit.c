#include <stdio.h>
#include "main.h"
/**
 * clear_bit - goodd
 * @n: good
 * @index: goos
 * Return: (0)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}

