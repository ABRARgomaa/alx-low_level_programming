#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - good
 * Return: nothing
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
