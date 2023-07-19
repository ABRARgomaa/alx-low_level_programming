#include <stdio.h>
/**
 * main - Entry Point
 * Return: (0)
 */
int main(void)
{
	int n;
	unsigned long n1 = 0, n2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = n1 + n2;
		printf("%lu", sum);
		n1 = n2;
		n2 = sum;
		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
