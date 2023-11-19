#include "function_pointers.h"

/**
* array_iterator - calling function
* @array: elements to be passed to void (*action)(int)
* @size: length of array
* @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}


}
