#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet()
{
	int i = 97;
	for (; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
	
	return i;
}
