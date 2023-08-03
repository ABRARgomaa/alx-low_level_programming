#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - good
 * @n: good
 * Return: (0)
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - good
 * @n: good
 * @val: good
 * Return: (0)
 */

int square(int n, int val)
{
	if (val * val == n)

		return (val);

	else if (val * val < n)

		return (square(n, val + 1));

	else
		return (-1);
}

