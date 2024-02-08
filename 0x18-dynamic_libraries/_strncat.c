#include <string.h>
#include <stdio.h>
/**
* _strncat - function
* @dest: param 1
* @src: param 2
* @n: param 3
* Return: Always 0 Success
*/

char *_strncat(char *dest, char *src, int n)
{

	int index = 0;
	size_t len = strlen(dest);
	/**
	* while (dest[index++])
	*	dest_len++;
	*/
	for (index = 0; src[index] && index < n; index++)
		dest[len++] = src[index];

	return (dest);


	putchar('\n');
}
