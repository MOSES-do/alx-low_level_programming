#include <stdio.h>



/**
* fizzBuzz - print 
* @n: parameter
*/


void fizzBuzz(int n)
{
	/**
	char *a = 'Fizz';
	char *b = 'Buzz';
	char *c = 'FizzBuzz';
	*/

	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}

		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}

		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
			printf("%d ", i);
		}
	}

	putchar('\n');
}
