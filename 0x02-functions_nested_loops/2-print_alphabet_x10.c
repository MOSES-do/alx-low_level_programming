#include "main.h"

/**
* print_alphabet_x10 - Function creation
*
* Return: Always 0 (Success)
*/

int print_alphabet_x10(void)
{
	int i, j;

	for ( i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

	return (j);
}
