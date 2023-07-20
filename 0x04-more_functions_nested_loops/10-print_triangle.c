#include <stdio.h>
#include "main.h"
/**
 * print_triangle - good
 * @size: good
*/
void print_triangle(int size)
{
int n, n1;

if (size <= 0)
putchar('\n');
else
for (n = 1; n <= size; n++)
{
for (n1 = 1; n1 <= size; n1++)
{
if ((n + n1) <= size)
putchar(' ');
else
putchar('#');
}

putchar('\n');
}
}
