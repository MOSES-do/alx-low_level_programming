#include <string.h>
#include <stdio.h>


/**
* _strncpy - Function
* @dest: Param 1
* @src: Param 2
* @n: Param 3
* Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int w = 0, sr_len = 0;

	while (src[w++])
		sr_len++;

	for (w = 0; w < n && src[w]; w++)
		dest[w] = src[w];

	for (w = sr_len; w < n; w++)
		dest[w] = '\0';

	return (dest);
}
