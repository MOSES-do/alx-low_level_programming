#include <stdio.h>


/**
* _strcpy - function
* @dest: param 1
* @src: param 2
*
* Return: Always 0 (Success)
*/


char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
