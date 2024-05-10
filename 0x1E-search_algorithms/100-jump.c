#include "search_algos.h"

/**
 * *asc_order_array - sorts array in asc order
 * @array: Array to be sorted
 * @size: length of array
 * Return: returns sorted array
 */
int *asc_order_array(int *array, size_t size)
{
	int i = 0;
	int j = 0;
	int n = size - 1;
	int temp = 0;

	while (i < n)
	{
		for (j = i; j <= n; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	i++;
	}
	return (array);
}


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
{/**
* Control out of bound only when step is
* a sqrt higher than and not when step == n
* if size = 10-1 = 9, control out of bound when step = 12
* NOT NEEDED -	controls out of bound at exactly n
* define min(a, b) ((a) < (b) ? (a) : (b))
*/
	int step = 0;
	int prev = 0;
	int *arr;
	int n = size - 1;

	arr = asc_order_array(array, size);

	if (arr == NULL)
		return (-1);
	while (arr[step] < value && prev != n)
	{
		if (prev == n)
			return (-1);
		printf("value checked array[%d] = [%d]\n", step, arr[step]);
		prev = step;
		step += sqrt(n);
	}
	printf("value found between indexes [%d] and [%d]\n", prev, step);
	while (prev <= step)
	{
		printf("value checked array[%d] = [%d]\n", prev, arr[prev]);
		prev++;
		if (arr[prev] == value)
		{
			printf("value checked array[%d] = [%d]\n", prev, arr[prev]);
			return (prev);
		}

		if (step > n)
			return (-1);
	}
	return (-1);
}
