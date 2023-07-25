#include <stdio.h>
#include "main.h"
/**
 * print_rev - good
 * @s: good
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
