#include <stdio.h>
#include <stdlib.h>

/**
* main - functiom to multiply two arguments
* @argc: param 1
* @argv: param 2
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
		printf("Error\n");
	else
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}

	return (0);
}
