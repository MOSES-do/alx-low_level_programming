#include "main.h"


/**
* swap_int - swap value of a for b.
* @a: Integer param 1
* @b: Integer param 2
*/

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
