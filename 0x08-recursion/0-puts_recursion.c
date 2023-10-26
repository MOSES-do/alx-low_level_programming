#include "main.h"

/**
* _puts_recursion - function
* @s: param 1
*/

void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');

}
