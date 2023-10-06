#include <stdio.h>

/**
* main - Entry points
*
* Return: Always 0 (Success)
*/


int main(void)
{

char a = 97;

for (; a <= 122; a++)
{
	if (a == 'e' || a == 'q')
		continue;

	putchar(a);
}

putchar('\n');

return (0);

}
