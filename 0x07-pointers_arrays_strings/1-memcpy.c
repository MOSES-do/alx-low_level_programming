
/**
* _memcpy - function to copy src into destination
* @dest: param 1
* @src: param 2
* @n: param 3;
* Return: destination values
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (; src[index] && index < n; index++)
		dest[index] = src[index];

	return (dest);
}
