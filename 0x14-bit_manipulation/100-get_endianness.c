#include <stdio.h>
#include "main.h"
/**
 * get_endianness - good
 * Return: (0)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return (*byte == 1);
}

