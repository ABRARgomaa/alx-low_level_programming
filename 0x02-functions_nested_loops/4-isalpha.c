#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - good
 * @c:c
 * Return: (0)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}