#include <stdio.h>


/**
* _strchr - returns first occurence of search item if found
* @s: param 1 - string to search
* @c: param 2 - element to find
* Return: element found is returned
*/

char *_strchr(char *s, char c)
{
	unsigned int index = 0;
	/*
	unsigned int strlen = 0;

	while (s[index] >= '\0')
	{
		strlen++;

		for (index = 0; index < strlen; index++)
			if (s[index] == c)
				return (s + index);
	index++;
	}
	return ('\0');
	*/

	while (s[index] >= '\0')
	{
		if (s[index] == c)
			return (s + index);
	index++;
	}

	return (s);
}
