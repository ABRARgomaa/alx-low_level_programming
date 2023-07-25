#include <stdio.h>
#include "main.h"
/**
 * puts_half - good
 * @str: good
 */
void puts_half(char *str)
{
	int length = 0;

	// Calculate the length of the string
	while (str[length] != '\0')
	{
		length++;
	}

	// Calculate the starting index for the second half of the string
	int start_index = (length - 1) / 2;

	// Print the second half of the string
	for (int i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	// Print a new line
	putchar('\n');
}
