#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - good
 * @n: good
 * Return: (0)
 */
int print_last_digit(int n)
{
	n = n % 10;
	printf("%d", n);
	return (n);
}