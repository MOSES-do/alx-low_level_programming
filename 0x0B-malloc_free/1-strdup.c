#include <string.h>
#include <stdlib.h>

/**
* _strdup - function to copy source array to destination
*	while dynamicaaly allocating memory to destination
* @str: source string/array
* Return: destination array
*/

char *_strdup(char *str)
{	
	char *array;
	int len, i = 0;
	len = strlen(str);

	if (str == NULL)
		return (NULL);

	array = malloc(sizeof(char) * len);

	if (array == NULL)
		return (NULL);

	for (; i < len; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
