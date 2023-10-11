#include <stdio.h>


/**
* print_sign - function declaration
*
* @n: argument or parameter
*
* Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (0);
}
