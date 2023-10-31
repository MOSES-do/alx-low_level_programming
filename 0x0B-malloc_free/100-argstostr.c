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
	int index;

	if (ac == 0 || av == NULL)
		return (NULL);

	array = malloc(sizeof(char) * ac - 1);

	/*printf("len:%d\n", ac);*/

	if (array == NULL)
		return (NULL);

	for (index = 1; av[index] && index < ac; index++)
	{
		printf("%s\n", array[ac++] + av[index]);
	}
	return (array);
}
