#include <stdio.h>
#include "main.h"
/**
 * puts_half - good
 * @str: good
 */
void puts_half(char *str)
{
	int length, start_index, i;

length = 1;
	while (str[length] != '\0')
	{
		length++;
	}
	start_index = (length - 1) / 2;
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
