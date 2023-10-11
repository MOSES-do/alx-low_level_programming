#include "main.h"


/**
 * main - Invokes the function
 *
 * Return: Always 0.
 */


void alpha_test(int c)
{
	int r;

	r = _isalpha(c);
	_putchar(r + '0');

}

int main(void)
{
	alpha_test('H');
	alpha_test('o');
	alpha_test(108);

	_putchar('\n');
	
	return (0);
}
