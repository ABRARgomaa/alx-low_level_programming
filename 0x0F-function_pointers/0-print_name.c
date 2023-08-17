#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - good
 * @name: good
 * @f: good
 * Return: (0)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

