
/**
* _strncpy - function
* @dest: param 1 - receiving array
* @src: source array
* @n: nth portion of "src"
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
