/**
* _strpbrk - function
* @s: param 1
*
* @accept: param 2
* Return: ALways 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
