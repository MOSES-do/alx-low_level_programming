

/**
* _strlen_recursion - function to print string length
* @s: param 1
*/


int _strlen_recursion(char *s)
{
	int index = 0;
	int str_len = 0;

	while (s[index])
	{
		str_len++;
	index++;
	}

	return (str_len);
}
