#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always(0)
 */
int main(void)
{
	int n, num, i;

	for (n = 1; n < 8; n++)
	{
		for (num = n+1; num <9; num++)
		{
			for (i = num+1; i <10; i++)
			{
				putchar(n + '0');
				putchar(num + '0');
				putchar(i + '0');
				if (n == 7 && num == 8 && i == 9)
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
	return (0);
}
