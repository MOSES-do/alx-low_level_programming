#include "main.h"



/**
* rev_string - function to reverse a string
* @s: parameter
*/


void rev_string(char *s)
{
	int i = 0, recur = 0;
	char var;

	while (s[i++])
		recur++;

	for (i = recur - 1; i >= recur / 2; i--)
	{
		var = s[i];
		s[i] = s[recur - i - 1];
		s[recur - i - 1] = var;
	}
}
