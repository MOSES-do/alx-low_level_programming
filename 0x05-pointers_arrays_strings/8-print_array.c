#include <stdio.h>

/**
* print_array - functon to print an array
* @a: parameter 1
* @n: parameter 2
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		if (i < n - 1)
			printf("%d, ", a[i]);

		if (i == n - 1)
			printf("%d", a[i]);
	}

	putchar('\n');
}
