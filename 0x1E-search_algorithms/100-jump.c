#include "search_algos.h"

/**
 * jump_search - function to search an array
 *	using a movement based on sqrt of
 *	size of array - 1, i.e. n = size-1.
 *	Using sqrt(n) as the basis for movement
 *	within the array
 * @array: d.s to be traversed
 * @size: size of the array/no. of element sin the array
 * @value: element to be founs within the array
 * Return: -1 /if element is not found/
 */

int jump_search(int *array, size_t size, int value)
{
	/**
	 * Control out of bound only when step is
	 * a sqrt higher than and not when step == n
	 * if size = 10-1 = 9
	 * control out of bound when step = 12
	 * NOT NEEDED -	controls out of bound at exactly n
	 * define min(a, b) ((a) < (b) ? (a) : (b))
	 */
	int step = 0;
	int prev = 0;
	int n = size - 1;

	if (array == NULL)
		return (-1);

	while (array[step] < value && prev != n)
	{
		if (prev == n)
			return (-1);
		printf("value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(n);
	}
	printf("value found between indexes [%d] and [%d]\n", prev, step);
	while (prev <= step)
	{
		printf("value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (array[prev] == value)
		{
			printf("value checked array[%d] = [%d]\n", prev, array[prev]);
			return (prev);
		}

		if (step > n)
			return (-1);
	}

	return (-1);
}
