#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/



int main(void)
{

	int num = 0;

	for (; num < 10; num++)
	{
		putchar('0' + num);

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}

	putchar('\n');

	return (0);

}
