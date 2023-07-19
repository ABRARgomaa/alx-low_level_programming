#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print_
*/
void print_to_98(int n)
{
    int c;
    if (n > 98)
    {
        for (c = n; c >= 98; c--)
        {
            _putchar(c);
            _putchar(',');
            _putchar(' '); 
        }
    }
    else if (n == 98)
    _putchar(n + 48);
    else
    {
        for (c = n; c <= 98; c++)
        {
           _putchar(c);
           _putchar(',');
           _putchar(' ');

        }
    }
    _putchar('\n');
}