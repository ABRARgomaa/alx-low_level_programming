#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - good
 * @separator: good
 * @n: good
 * Return: (0)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *current_str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, const char *);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s ", separator);
	}
	va_end(args);
	printf("\n");
}

