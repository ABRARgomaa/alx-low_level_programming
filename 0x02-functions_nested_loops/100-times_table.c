#include <stdio.h>
#include "main.h"
/**
 * print_times_table - good
 * @n: good
 */
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		_putchar(48);
		for (b = 1; b <=n; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			if (c <= 9)
			_putchar(' ');
			else
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}