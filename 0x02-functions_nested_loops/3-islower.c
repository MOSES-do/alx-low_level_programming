#include <ctype.h>
#include "main.h"


/**
* _islower -  Test for letter casing
*
* @c: Parameter to be checked
*
* Return: Always 1 0r 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else
	{
		return (0);
	}
}

