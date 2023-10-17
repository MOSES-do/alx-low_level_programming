#include "main.h"

/**
* puts_half - print half of  a string
*
* @str: parameter
*/

void puts_half(char *str)
{
	int i = 0, length = 0, halve;

	while (str[i++])
		length++;

	if (length % 2 != 0)
		halve = (length + 1) / 2;
	else
		halve = length / 2;

	for (i = halve; i <= length - 1; i++)
		_putchar(str[i]);

	_putchar('\n');

}
