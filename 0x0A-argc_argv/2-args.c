#include <stdio.h>

/**
* main - function to print params to argv array
* @argc: param 1
* @argv: param 2
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int index = 0;

	for (; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
