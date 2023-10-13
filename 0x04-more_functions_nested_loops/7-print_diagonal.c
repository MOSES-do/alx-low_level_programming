#include "main.h"


/**
* print_diagonal - diagonal shape
*
* @n: parameter
*/

void print_diagonal(int n)
{
	int col, spaces;

	if (n > 0)
	{
		for (col = 0; col < n; col++)
		{
			for (spaces = 0; spaces < col; spaces++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (col == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
