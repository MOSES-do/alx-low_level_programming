#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - function to concatenate arguments of your program
* @ac: length of argument
* @av: array of aarguments
* Return: Always  (Success)
*/


char *argstostr(int ac, char **av)
{
	char *array;
	int index, byte, arg, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	array = malloc(sizeof(char) * size + 1);

	/*printf("size:%d ac:%d\n", size, ac);*/

	if (array == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			array[index++] = av[arg][byte];

		array[index++] = '\n';
	}

	array[size] = '\0';

	return (array);
}
