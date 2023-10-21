#include "main.h"

/**
* print_number - function to print numbers
* @n: Parameter 1
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) < 10 && (num / 10) > 0)
		_putchar((num / 10) + '0');

	if (num > 1000)
	{
		_putchar((num / num) + '0');
		_putchar((num - num) + '0');
	}

	if ((num / 10) > 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');

}

