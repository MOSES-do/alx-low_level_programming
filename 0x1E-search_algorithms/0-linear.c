#include "search_algos.h"

/**
 * linear_search - functiom to search an array linearly 0(n) complexity
 * @array: data structure to be traversed
 * @size: size of the array/no. of element sin the array
 * @value: element to be founs within the array
 * Return: -1 /if element is not found/
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	i++;
	}
	return (-1);
}
