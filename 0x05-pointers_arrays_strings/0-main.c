#include "main.h"


/**
* main - returns first the current value of n,
* then updates to the value at reset_to_98
*
* Return: Always 0 (Success)
*/


int main(void)
{

	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}



