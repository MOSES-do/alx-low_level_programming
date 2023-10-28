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
	int i = 1, j, sum = 0;

	for (; i < argc; i++)
	{
		/**
		* [i][j] checks for scenarios of alphabets joined with letters in each index
		* 23e5 e 2e 4r4  and returns an error.
		* Don't use dereferencing to cross check values in array use their index
		*/

		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}

		/**
		* WRONG
		* if  (*argv[i] < '0' || *argv[i] > '9')
		* {
		*	printf("Error\n");
		*	return (1);
		* }
		*/

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
