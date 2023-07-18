#include <stdio.h>
#include "main.h"
/**
 * print_sign - good
 * @n: good
 * Return: (0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		putchar(0);
		putchar(',');
		putchar(' ');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		putchar(',');
		putchar(' ');
		return (-1);
	}
	return (0);
}
