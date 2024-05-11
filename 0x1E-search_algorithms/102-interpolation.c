#include "search_algos.h"

/**
 * interpolation_search - search functio based on uniformity
 *	of data set to optimize performance
 * @array: data structure
 * @size: length of the array
 * @value: Target element
 * Return: return -1 if target is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int n = size;
	int high = n - 1;
	int get_index;
	int *a = array;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		get_index = low + ((value - a[low]) * (high - low) / (a[high] - a[low]));
		if (array[get_index] == value)
		{
			printf("Value checked array[%d] = [%d]\n", get_index, array[get_index]);
			return (get_index);
		}

		if (array[get_index] < value)
		{
			printf("Value checked array[%d] = [%d]\n", get_index, array[get_index]);
			low = get_index + 1;
		}
		/*if key is smaller, search in the left subarray*/
		else
		{
			printf("Value checked array[%d] = [%d]", get_index, array[get_index]);
			high = get_index - 1;
		}
	}

	printf("Value checked array[%d] is out of range\n", get_index);
	return (-1);
}
