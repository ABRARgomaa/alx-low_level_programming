#include <stdio.h>
/**
 * _islower - good
 * Return: (0)
 */
int _islower(int c)
{

	if (c == 'A' || c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
