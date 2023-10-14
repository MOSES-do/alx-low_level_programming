#include "main.h"

/**
* print_triangle - function
* @size: parameter
*
*/


void print_triangle(int size)
{
	int row, col, spaces;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (spaces = size - 1; spaces > row; spaces--)
			{
				_putchar(' ');

			}

			for (col = 0; col <= row; col++)
			{
				_putchar('#');
			}

			if (col > size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');

}
