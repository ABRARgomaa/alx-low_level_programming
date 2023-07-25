#include <stdio.h>
#include "main.h"
/**
 * puts_half - good
 * @str: good
 */
void puts_half(char *str)
{
	int l, i;
	char temp;
	for (l = 0; str[l] != '\0'; l++)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = temp;
		putchar(temp + 0);
	}
	putchar('\n');
}
