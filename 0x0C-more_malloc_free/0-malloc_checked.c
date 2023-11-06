#include <stdlib.h>



void *malloc_checked(unsigned int b)
{
	
	void *add = malloc(b);

	if (add == NULL)
	{
		exit(98);
	}

	return (add);
}

