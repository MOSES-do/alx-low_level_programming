#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - function to concatenate strings
* @s1: str 1
* @s2: str2
* @n: n iteration of s2
* Return: Always 0 Sucess
*
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_ncat;
	unsigned int i = 0, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str_ncat = malloc(sizeof(char) * (len + 1));


	if (str_ncat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		str_ncat[len++] = s1[i];

	for (i = 0; i < n; i++)
		str_ncat[len++] = s2[i];

	str_ncat[len++] = '\0';

	return (str_ncat);
}
