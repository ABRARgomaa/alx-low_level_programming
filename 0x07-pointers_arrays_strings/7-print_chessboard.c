#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - good
 * @a: good
 */
void print_chessboard(char (*a)[8])
{
	int l, j;

	for (l = 0; l < 8; l++)
	{
		for (j = 0; j < 8; j++)
		{
		putchar(a[l][j]);
		}
	putchar('\n');
	}	
}

