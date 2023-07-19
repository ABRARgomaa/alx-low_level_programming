#include <stdio.h>
/**
 * main - Entry Point
 * Return: (0)
 */
int main(void)
{
	int n;
	unsigned int n1 = 0, n2 = 1, sum;
	for (n == 0; n < 98; n++)
	{
		sum = n1 + n2;
		printf("%u", sum);
		n1 = n2;
		n2 = sum;
		if (n == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}