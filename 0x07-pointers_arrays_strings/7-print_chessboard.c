#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - good
 * @a: good
 */
void print_chessboard(char *a)
{
	char a[l][j];

	for (l = 0; l < 8; l++)
	{
		for (j = 0; j < 8; j++)
		{
			printf ("a[l][j]");
			if (j == 8)
			{
				printf("\n");
			}
		}
	}
	return (0);
}
