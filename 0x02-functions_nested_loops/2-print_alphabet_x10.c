#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - good
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}