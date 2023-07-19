#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - good
 * @n: good
 * Return: (0)
 */
int print_last_digit(int n)
{
	if (n < 0)
	n = -n;
	n = n % 10;
	_putchar(n);
	return (n);
}