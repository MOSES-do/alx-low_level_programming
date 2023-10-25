#include <stdio.h>

/**
* set_string - function to set the value of a pointer
*		to a char
* @s: param1
* @to: param2
*/


void set_string(char **s, char *to)
{
	*s = to;
}
