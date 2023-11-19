#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - calling function
* @array: elements to be parsed
* @size: length of array
* @cmp: comparism function
* Return: 2 on positive eq Num, 1 on negative eq num
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

