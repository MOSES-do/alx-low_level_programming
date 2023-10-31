#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - function to concatenate string to new array
* @s1: src string 1
* @s2: src string 2
* Return: array;
*/

char *str_concat(char *s1, char *s2)
{
	char *array;
	int len = 0, i = 0, array_index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	/*printf("len%d\n", len);*/

	array = malloc(sizeof(char) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		array[array_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		array[array_index++] = s2[i];

	return (array);
}
