#include <stdio.h>
#include <string.h>
/**
* separator - function to filter string
* @sign: parameter
* Return: 0 (Success)
*
*/
int separator(char *sign)
{

	int i = 0;


	if (sign[i] >= 'a' && sign[i] <= 'z')
		sign[i] = sign[i] - 32;
	i++;

	while (sign[i])
	{


		if (sign[i - 1] == ' ' ||
			sign[i - 1] == '\t' ||
			sign[i - 1] == '\n' ||
			sign[i - 1] == ',' ||
			sign[i - 1] == ';' ||
			sign[i - 1] == '!' ||
			sign[i - 1] == '?' ||
			sign[i - 1] == '"' ||
			sign[i - 1] == '(' ||
			sign[i - 1] == ')' ||
			sign[i - 1] == '{' ||
			sign[i - 1] == '}' ||
			sign[i - 1] == '.')
		{
			if (sign[i] >= 'a' && sign[i] <= 'z')
				sign[i] = sign[i] - 32;
		}

	i++;
	}

return (0);

}


/**
* cap_string - callback function
* @str: parameter
* Return: string value
*/

char *cap_string(char *str)
{

	separator(str);

	return (str);
}











/*
*if (sign[i] == ';' || sign[i] == '\t' || sign[i] == '?')
*	sign[i] = ' ';
*
*
*if (sign[i] == ' ' || sign[i] == '\n')
*{
*	if (sign[i + 1] >= 'A' && sign[i + 1] <= 'Z')
*		sign[i + 1] = sign[i + 1] - 32;
*}
*
*if (sign[i - 1] == '\t' || sign[i - 1] == ','
*
*if (sign[i] == 'd' && sign[i + 1] == '.')
*	sign[i + 2] = sign[i + 2] - 32;
*/

