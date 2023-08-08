#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - good
 * @grid: good
 * @height: good
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}

