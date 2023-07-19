#include <stdio.h>
#include "main.h"
/**
 * times_table - good
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			printf("%d, ", c);
			if (c <= 9)
			_putchar(' ');
		}
		printf("\n");
	}
}