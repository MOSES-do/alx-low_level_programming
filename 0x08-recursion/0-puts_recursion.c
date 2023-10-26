#include "main.h"

/**
* _puts_recursion - function
* @s: param 1
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		if (*s + 1 == '\0') 
			return;

		_putchar(*s);
		_puts_recursion(s + 1);

	}

	_putchar('\n');

}
