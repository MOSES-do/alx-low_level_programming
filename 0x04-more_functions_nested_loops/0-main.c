#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* main - Invokes function
*
* Return: Always 0 (Success)
*/

int main(void)
{

	char c;

    	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
