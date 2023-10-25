#include <stdio.h>

/**
* print_diagsums - function to add two diagonals of a square matrix of integers
* @a: pointer to 2d array
* @size: height of array
*/

void print_diagsums(int *a, int size)
{
	/**
	*int row, col, sum = 0;
	*diagonal right to letf
	*
	* for (row = 1; row <= size; row++)
	*
	* for (col = row; col == row; col++)
	*
	* sum = sum +  *(a + row + col);
	*
	*
	* printf("%d ", sum);
	*/

	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
