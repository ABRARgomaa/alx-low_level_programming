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
		for (num = 1; num < 10; num++)
		{
			putchar(n + '0');
			putchar(num + '0');
		}
	}
	putchar(',')
	putchar(' ')
	putchar('\n')
	return (0);
}
