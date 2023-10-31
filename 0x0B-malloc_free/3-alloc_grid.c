#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


/**
* twoDarray - 2dimensional array fn() without malloc
* @row: height of
* @col: No. of cols of each row
* @width: no. of cols of 2d array
* @array: double pointer
*/


void twoDarray(int row, int col, int width, int **array)
{
	for (row = 0; array[row][col]; row++)
	{
		for (col = 0; col < width; width++)
		{
			array[row][col] = 0;
		}
	}
}


/**
* alloc_grid - function for 2-dimensional integer
* @width: no. of cols of 2-dimensional array
* @height: no of rows of 2-dimensional array
* Return: double pointer
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int row, col = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		/**
		* allocate memory for columns of each row
		*/
		array[row] = malloc(sizeof(int) * width);
		/**
		* check for memory allocation failure
		* as each row is allocated, malloc may fail to
		* allocate a row. Check whether malloc returns
		* a null pointer i.e. (m.a.f)
		* If allocation fails, memory of previously created
		* rows are freed up.
		*/
		if (array[row] == NULL)
		{
			for (; row >= 0; row--)
				free(array[row]);

			free(array);
			return (NULL);
		}
	}

	twoDarray(row, col, width,  array);

	return (array);
}

