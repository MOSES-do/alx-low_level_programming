#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

 void sign_print(int n)
 {
 	int r;

	r = print_sign(n);

	if (r > 0)
	{
		r *= +1;
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(r + '0');
		_putchar('\n');
	} 
	else if (r == 0)
	{
		r *= 0;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(r + '0');
		_putchar('\n');
	}
	else if (r < 0)
	{
		r *= -1;
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar(r + '0');
		_putchar('\n');
	}
 }

int main(void)
{
	sign_print(98);

	sign_print(0);

	sign_print(0xff);

	sign_print(-1);


    return (0);
}
