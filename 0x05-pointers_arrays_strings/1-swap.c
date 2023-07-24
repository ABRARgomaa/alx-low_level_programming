#include <stdio.h>
#include "main.h"
/**
 * swap_int - good
 * @a: good
 * @b: good
 */
void swap_int(int *a, int **b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
