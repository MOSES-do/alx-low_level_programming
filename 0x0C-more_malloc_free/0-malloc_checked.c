#include <stdlib.h>

/**
* malloc_checked - function
* @b: param
* Return: Always 0 (Success)
*/



void *malloc_checked(unsigned int b)
{
	void *add = malloc(b);

	if (add == NULL)
	{
		exit(98);
	}

	return (add);
}

