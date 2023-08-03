#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion -good
 * pow - good
 * @x: good
 * @y: good
 * Return: (0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

