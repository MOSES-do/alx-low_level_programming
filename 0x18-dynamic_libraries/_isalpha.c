#include <ctype.h>

/**
* _isalpha -  Test for letter casing
*
* @c: Parameter to be checked
*
* Return: Always 1 0r 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
