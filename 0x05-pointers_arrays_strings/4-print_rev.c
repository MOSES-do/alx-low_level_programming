#include "main.h"



/**
* print_rev - print a string in its reverse order
* @s: parameter
*/


void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
