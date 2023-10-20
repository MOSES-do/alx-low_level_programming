#include <stdio.h>

/**
* string_toupper - function to convert letter case to upper
* @str: parameter
* Return: subtract 32 from each caharacter in the string
*/


char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str++ -= 32;

		index++;
	}

	return (str);
}

