#include <stdlib.h>
#include "main.h"


/**
 * main - invokes function
 *
 * Return: Always 0.
 */


void remain_der(int n)
{
	
	int r, last_digit;


	r = print_last_digit(n);
		

	last_digit = r % 10;

	if (last_digit > 10)
		_putchar(48 + (last_digit % 10));
	else
		_putchar(48 + last_digit);
	
	
}

 int main(void)
 {
	remain_der(98);
	remain_der(0);
	remain_der(-1024);
	
	_putchar('\n');
	return (0);
 }
