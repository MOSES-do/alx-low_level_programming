

/**
* string_toupper - function to convert letter case to upper
* @str: parameter
* Return: subtract 32 from each caharacter in the string
*/


char *string_toupper(char *str)
{
	int i = 0, str_len = 0;

	while (*str)
		str_len++;
	
	for (; i < str_len; i++)
		if (str[i] == ' ' || str[i] == '!')
			continue;
		else
			str[i] += 32;
	
	return (0);
}

