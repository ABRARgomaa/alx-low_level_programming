#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - good
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			printf("%d", n);
	}
	printf("\n");
}
