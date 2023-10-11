#include "main.h"


/**
* print_alphabet - function declaration
*
* Return: expression update
*/


int print_alphabet(void)
{

	int i = 97;

	for (; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

	return (i);
}
