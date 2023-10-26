

/**
* _strlen_recursion - function to print string length
* @s: param 1
*  Return: Always 0 (Success)
*/


int _strlen_recursion(char *s)
{

	int sum = 1;

	if (*s)
	{
		sum = sum + _strlen_recursion(s + 1);
		return (sum);
	}

	return (0);
}
