#include <stdio.h>


/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Swap strings to see if they stay the same.
 * @s: Param 1.
 * @len: The length of string.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 *	   Always return 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: param 1
 *
 * Return: Always success 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
