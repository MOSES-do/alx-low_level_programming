#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _puts - function
* @str: parameter
*/


void _puts(char *str)
{
	while(*str)
		_putchar(*str++);
	_putchar('\n');
}
