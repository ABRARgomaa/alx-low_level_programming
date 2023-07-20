#include <stdio.h>
#include "main.h"
/**
 * print_line - good
 * @n: good
 */
void print_line(int n)

{
	int c;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
