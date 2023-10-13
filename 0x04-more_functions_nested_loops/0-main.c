#include "main.h"

/**
* main - Invokes function
*
* Return: Always 0 (Success)
*/


void checkCasing(int n)
{
	int r;

	r = _isupper(n);
	

	_putchar(n);
	_putchar(':');
	_putchar(' ');
	_putchar('0' + r);
	_putchar('\n');


}


int main(void)
{
	/**
	char c, r;

    	c = 'A';
	r = _isupper(c);
	printf("%c: %d\n", c, r);
	*/

	checkCasing('A');
	checkCasing('a');

	return (0);
}
