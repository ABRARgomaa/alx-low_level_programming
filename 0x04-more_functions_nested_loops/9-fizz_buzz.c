#include <stdio.h>
/**
 * main - Entry Point
 * Return: (0)
 */
int main(void)

{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if ((n % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		if ((n % 5) == 0)
		{
			if (n == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
			continue;
		}

		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
