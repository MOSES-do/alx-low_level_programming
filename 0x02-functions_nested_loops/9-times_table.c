#include <stdio.h>
#include "main.h"

/**
*  times_table - Table of multiplication 9
*/


int times_table(void)
{
	int num, m, p;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = num * m;

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
