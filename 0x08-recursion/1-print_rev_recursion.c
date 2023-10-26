#include "main.h"
#include "string.h"

/**
* _print_rev_recursion - function
*
* @s: param 1
*/


void _print_rev_recursion(char *s)
{
	int index = 0;
	size_t str_len = strlen(s);

	for (index = str_len; index >= 0; index--)
	{
		_putchar(s[index]);
	}
}
