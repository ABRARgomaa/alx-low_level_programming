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
            printf("%d", c);   
        }
    }
    else if (n == 98)
    printf("%d", n);
    else
    {
        for (c = n; c <= 98; c++)
        {
           printf("%d", c); 
        }
    }
    _putchar('\n');
}