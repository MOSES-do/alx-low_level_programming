#include "main.h"

/**
* print_alphabet_x10 - Function creation
*
* Return: Always 0 (Success)
*/

int print_alphabet_x10()
{

	int j = 97;

	for (i = 0; i <= 10; i++)
	{

		for (; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar("\n");
	}

	return (j);
}
