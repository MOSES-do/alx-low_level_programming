#include <stdlib.h>

/**
* free_grid - function to free memory for 2d array height
* @grid: 2d array
* @height: array height
*/

void free_grid(int **grid, int height)
{
	int index = height;

	while (index >= 0)
	{
		free(grid[index]);
	index--;
	}

	free(grid);
}

