#include <stdio.h>


/**
* nargs - function to print argc length
* @argc: param 1
* @argv: param 2
* Return: ALways 0 (Success
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
