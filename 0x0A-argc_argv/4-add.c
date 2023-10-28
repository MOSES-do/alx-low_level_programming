#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - function
* @argc: param 1
* @argv: param 2
* Return: Always (0) success
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	for (; i < argc; i++)
	{

		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);

}
