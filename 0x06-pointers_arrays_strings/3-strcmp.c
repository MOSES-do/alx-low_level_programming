#include <stdio.h>

/**
* _strcmp - Compares indexes of two strings
* @s1: param 1
* @s2: param 2
* Return:	If at any point in the loop the index of  s1 < s2 / differs -
*		from s2  return the difference
*		If the index of s1 > s2 return the difference
*		If s1 == s2 or s1 == s1 return 0
*/


int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] && s2[index])
	{
		/*
		*putchar(s1[index]);
		*putchar(s2[index]);
		*/
	if (s1[index] != s2[index])
		return (s1[index] - s2[index]);
	index++;
	}

	return (0);
}
