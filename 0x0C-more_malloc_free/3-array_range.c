#include <stdlib.h>


/**
* array_range - function to allocate memeory for a set of
* values from two values
* @min: lowest value
* @max: highest value
* Return: Always 0 Success
*/

int *array_range(int min, int max)
{
	int *array_int, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array_int = malloc(sizeof(int) * size);

	if (array_int == NULL)
		return (NULL);

	for (min = 0; min < size; min++)
	{
		array_int[min] = min;
	}

	return (array_int);
}
