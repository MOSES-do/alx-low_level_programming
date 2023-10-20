#include <stdio.h>

/**
* _strcmp - Compares indexes of two strings
* @s1: param 1
* @s2: param 2
* Return:	If at any point in the loop the index of  s1 < s2 / differs -
*		from s2  return negative 15
*		If the index of s1 > s2 return positive 15
*		If s1 == s2 or s1 == s1 return 0
*/


int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] < s2[index])
		{
			return (-15);
		}
		else if (s1[index] > s2[index])
		{
			return (s1 - s2);
		}
		else
		{
			return (0);
		}
	}

	return (0);
}
