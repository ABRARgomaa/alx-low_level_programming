#include <stdio.h>
#include "main.h"
/**
 * print_square - good
 * @size: good
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	else
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
}
