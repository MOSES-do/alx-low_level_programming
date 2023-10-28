#include <stdio.h>
#include <stdlib.h>

/**
* main - function
* @argc: param 1
* @argv: param 2
* Return: Always (0) success
*/

int main(int argc, char *argv[])
{
	int i = 1, j = 0;
	int sum = 0;

	for (; i < argc; i++)
	{
		/**
		* [i][j] checks for scenarios of alphabets joined with letters in each index
		* 23e5 2 3 and returns an error.
		*/

		for (; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}

		/* [i] checks for 2 3 e 5 and returns an error */
		if  (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);

}
