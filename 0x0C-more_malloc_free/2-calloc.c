#include <stdlib.h>

/**
* _calloc - function that sets alloacated memory to 0
* @nmemb: no. of elements in array
* @size: data type to be stor
* Return: Always 0 Suceess
*
*
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *memory;
	int *fill_print;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	fill_print = memory;

	for (i = 0; i < nnemb; i++)
	{
		fill_print[i] = 0;
	}

	return (memory);

}
