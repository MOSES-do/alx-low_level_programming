#include <stdlib.h>

/**
* free_grid - function to free memory for 2d array height
* @grid: 2d array
* @height: array height
*/

void free_grid(int **grid, int height)
{
	int index = 0;

	for (; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}

