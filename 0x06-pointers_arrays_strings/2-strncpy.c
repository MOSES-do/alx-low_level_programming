#include <string.h>
#include <stdio.h>
/**
* _strncpy - function
* @dest: param 1 - receiving array
* @src: source array
* @n: nth portion of "src"
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
