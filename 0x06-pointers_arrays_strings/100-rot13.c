#include <stdio.h>







/**
* encod_str - function to encode strings in rot13
* @toks: parameter string
* Return: return value to be printed (toks)
*/

char *encod_str(char *toks)
{
	int index = 0, numOfNewChar = 0;
	char chartochange[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (toks[index] != '\0')
	{
		for (numOfNewChar = 0; numOfNewChar < 52; numOfNewChar++)
		{
			if (toks[index] == chartochange[numOfNewChar])
			{
				toks[index] = rot13[numOfNewChar];
				break;
			}
		}
	index++;
	}

return (toks);
}

/**
* rot13 - function to be passed to main
* @str: parameter
* Return: str
*/

char *rot13(char *str)
{
	encod_str(str);

	return (str);
}





