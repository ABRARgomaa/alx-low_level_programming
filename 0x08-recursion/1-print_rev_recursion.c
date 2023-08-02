#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - good
 * @s: good
 * Return: (0)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}

