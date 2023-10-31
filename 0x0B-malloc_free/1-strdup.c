#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - function to copy source array to destination
*	while dynamicaaly allocating memory to destination
* @str: source string/array
* Return: destination array
*/

char *_strdup(char *str)
{
	char *array;
	int len = 0, i = 0;

	/*len = strlen(str);*/

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	/*printf("len:%d\n slen:%d\n", len, slen);*/
	array = malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i] && i < len; i++)
	{
		array[i] = str[i];
	}

	array[i] = '\0';

	return (array);
}
