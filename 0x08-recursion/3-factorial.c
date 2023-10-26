
/**
* factorial - function to return the sum of (n - 1) of a number until n is 0
*
* @n: parameter
* Return: Always (0) Success
*/



int factorial(int n)
{

	int s = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	s = n * factorial(n - 1);

	return (s);
}
