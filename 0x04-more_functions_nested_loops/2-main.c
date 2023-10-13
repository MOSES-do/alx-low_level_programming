#include "main.h"


/**
void multiply(int a, int b)
{
	int r;

	r = mul(a, b);

	_putchar(a);
	_putchar(b);
	
	_putchar(r);
	_putchar('\n');
}
*/


int main(void)
{

	int a, b;

	a = mul(98, 1024);
	_putchar(48 + a);
	_putchar('\n');


	b = mul(-402, 4096);	
	_putchar(48 + b);
	_putchar('\n');


	return (0);
}
