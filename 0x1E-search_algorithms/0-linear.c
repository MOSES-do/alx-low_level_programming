#include "search_algos.h"

/**
 * 
 *
 *
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	i++;
	}
	return -1;
}
