#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * *string_toupper - good
 * @str: good
 * Return: (0)
 */
char *string_toupper(char *str)
{
	char *ptr = str;
	while (*ptr)
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return str;
}

