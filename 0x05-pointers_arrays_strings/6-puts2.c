#include "main.h"

/**
* puts2 - print num % 2 == 0;
* @str: parameter
*/

void puts2(char *str)
{
	int i = 0, r = 0;

	while (str[i++])
		r++;

	for (i = 0; i < r; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
