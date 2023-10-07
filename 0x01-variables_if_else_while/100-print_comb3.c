#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/



int main(void)
{
	int num, num1;

	for (num = 0; num <= 8; num++)
	{
		for (num1 = 1; num1 <= 9; num1++)
		{
			if (num1 != num && num1 > num)
			{
			putchar(48 + num);
			putchar(48 + num1);

			if (num != 8 || num1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}

	putchar('\n');
return (0);
}
