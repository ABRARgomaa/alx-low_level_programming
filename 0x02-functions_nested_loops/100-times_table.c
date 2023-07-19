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
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			printf("%d, ", c);
			if (c <= 9)
			{
				printf(" ");
			}
			if (n > 15 && n < 0)
			{
				break;
			}
		}
		printf("\n");
	}
}