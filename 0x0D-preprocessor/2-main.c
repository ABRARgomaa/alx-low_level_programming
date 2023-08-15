#include <stdio.h>
/**
 *  main - good
 *  Return: (0)
 */
int main(void)
{
	const char *filename;
	int i;

	filename = __FILE__;
	for (i = 0; filename[i] != '\0'; i++)
	{
		putchar(filename[i]);
	}
	putchar('\n');
	return (0);
}

