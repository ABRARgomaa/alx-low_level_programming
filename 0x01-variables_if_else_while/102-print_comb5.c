#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always(0)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 100; c++)
			{
				for (d = 0; d < 100; d++)
				{
					if (a == 0 && b == 0 && c == 0 && d ==0)
						continue;
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c / 10 + '0');
					putchar(c % 10 + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}


