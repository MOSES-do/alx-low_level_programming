#include "main.h"



/**
* main - invoke function
*
*
*/


void checkDigit(char n)
{
	
	/**
	for (i = 0; i <= n; i++)
		printf("%d", _isdigit(n));
	*/
	

	if (_isdigit(n))
	{
		_putchar(48);
	}
	else
	{
		_putchar('a');
	}

	_putchar(':');
	_putchar(' ');
	_putchar('0' + _isdigit(n));
	_putchar('\n');
}

int main(void)
{
	
	checkDigit('0' + 9);
	checkDigit('a');

	return (0);

}
