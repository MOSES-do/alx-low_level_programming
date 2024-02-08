#include <string.h>

/**
* *_strcat - copy an array to another
* @dest: param 1
* @src: param 2
* Return: return dest (0) - success
*/


char *_strcat(char *dest, char *src)
{

	strcat(dest, src);

	return (dest);
}
