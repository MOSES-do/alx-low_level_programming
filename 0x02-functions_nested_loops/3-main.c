#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass to _islower function
 */

void test_islower(int n)
{
	int r;

	r = _islower(n);
}


int main(void)
{
   

	test_islower('H');
 	
	test_islower('o');

	test_islower(108);
	
	_putchar(r + '0');

    return (0);
}
