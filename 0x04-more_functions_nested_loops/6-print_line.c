#include "main.h"


/**
* print_line - print new lines based on parameter 'n'
* @n: parameter
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
