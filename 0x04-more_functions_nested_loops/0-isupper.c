#include <ctype.h>


/**
* _isupper - Function to test uppercase character
* Return: Always 0 (Success)
* @c: Parameter to be tested
*/


int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
