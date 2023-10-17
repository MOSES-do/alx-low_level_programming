#include <stdio.h>
#include "main.h"
#include <string.h>


/**
* print_rev - print a string in its reverse order
* @s: parameter
*/


void print_rev(char *s)
{
	char *str = s;

	int i;

	for (i=0; i <= strlen(s); i--)
	{
		_putchar(i);
	}
}
