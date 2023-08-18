#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char) == NULL)
			printf("(nil)");
		printf("%c", va_arg(args, char));
		if (1 < n - 1 && separator != NULL)
			printf("%c ", separator);
	}
	printf("\n");
}

