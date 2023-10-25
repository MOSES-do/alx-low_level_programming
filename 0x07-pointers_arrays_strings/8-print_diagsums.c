#include <stdio.h>

/**
* print_diagsums - function to add two diagonals of a square matrix of integers
* @a: pointer to 2d array
* @size: height of array
*/

void print_diagsums(int *a, int size)
{

	int row, col, cols = size, sum = 0, sum1 = 0;

	/*diagonal right to left*/
	for (row = 0; row < size; row++)
	{
		for (col = row; col == row; col++)
		{
			/**printf("%d \n ", *(a + row * cols + col));*/
			sum = sum + *(a + row * cols + col);
		}
	}

	/*diagonal left to right*/
	for (row = 0; row < size; row++)
	{
		int tmp = 1;

		for (col = (size - row) - tmp ; col == (size - row) - tmp; col++)
		{
			/**printf("%d \n ", *(a + row * cols + col));*/
			sum1 = sum1 + *(a + row * cols + col);
		}
	}

	printf("%d, %d\n", sum, sum1);
}
