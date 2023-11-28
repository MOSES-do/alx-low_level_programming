#include <stdio.h>
#include "main.h"


/**
* times_table - Table of multiplication 9
*
* Return: ALways 0 (Success)
*/


int times_table(void)
{
	int row, col, p, size = 10;

	for (row = 0; row < size; row++)
	{
		_putchar('0');

		for (col = 1; col <= size - 1; col++)
		{
			_putchar(',');
			_putchar(' ');

			p = row * col;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
	return (0);
}
