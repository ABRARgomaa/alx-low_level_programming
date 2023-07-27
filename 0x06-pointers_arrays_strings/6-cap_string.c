#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * *cap_string -good
 * @str: good
 * Return: (0)
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (str[i])
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1
		}
		else
		{
			if (capitalize_next && isalpha(str[i]))
			{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
			}
			else
			{
			*ptr = tolower(*ptr);
			}
		}
		ptr++;
	}
	return (str);
}

