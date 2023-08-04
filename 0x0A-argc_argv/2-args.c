#include <stdio.h>
/**
 * main - good
 * @argc: good
 * @argv: good
 * Return: (0)
 */
int main(int argc, char const **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

