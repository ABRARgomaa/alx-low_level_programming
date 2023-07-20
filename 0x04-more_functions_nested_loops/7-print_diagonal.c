#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - good
 * @n: good
 */
void print_diagonal(int n)

{

	int a, b;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
