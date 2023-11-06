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
	size_t i = 0, len = 0, s2_len = 0, arrindex = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s2[s2_len])
	{
		s2_len++;
	}

	if (n >= s2_len)
		return (s2);

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	
	str_ncat = malloc(sizeof(char) * len);


	if (str_ncat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_ncat[arrindex++] = s1[i];

	for (i = 0; i < n; i++)
		str_ncat[arrindex++] = s2[i];
	
	str_ncat[arrindex++] = '\0';

	return (str_ncat);
}
