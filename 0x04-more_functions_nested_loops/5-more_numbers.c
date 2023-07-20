#include <stdio.h>
#include "main.h"
/**
 * more_numbers - good
 */
void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 15; n2++)
		{
			printf("%d", n2);
		}
		printf("\n");
	}
}
