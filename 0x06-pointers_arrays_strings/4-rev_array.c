#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{

	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		/*printf("%d temp:\n", temp);*/
		a[i] = a[n - i - 1];
		/*printf("%d a[i]:\n", a[i]);*/
		a[n - i - 1] = temp;
		/*printf("%d a[m-i-1]:\n", a[n-i-1]);*/
	}

	/*
	*printf("%d", a[i]),//6 where 1 < n/2 = 6, swap 5 times BTW start and end
	*temp = a[i] means temp is holding value at index of d/ array (0)
	*a[i] = a[n - i - 1], means a[i] = a[13 - 0 - 1],  a[0] = a[12]
	*next: a[12] = a[0];
	*/

}
