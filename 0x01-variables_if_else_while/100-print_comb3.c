#include <stdio.h>
/**
 * main - Enrty Point
 * Return: Always(0)
 */
int main(void)
{
	int n, num;

	for (n = 0; n < 9; n++)
	{
		for (num = n + 1; num < 10; num++)
		{
			if (n == 8 && num == 9)
			{
				putchar(n + '0');
				putchar(num + '0');
			}
			else
			{
				putchar(n + '0');
				putchar(num + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
