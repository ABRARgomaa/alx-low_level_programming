#include <stdio.h>
#include "main.h"
/**
 * _puts - doo
 * @str: doo
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
