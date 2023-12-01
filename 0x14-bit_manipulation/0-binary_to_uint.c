#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
* swapbuffer - swaps array's 1st and last elements using a loop
* @buf: array of numbers
* @len: length of array
* @b: string of binary numbers
* Return:sum of array;
*/
unsigned int swapbuffer(int *buf, int len, const char *b)
{
	 int tmp, i, halves;
	 unsigned int sum = 0;

	if (len % 2)
	{
		halves = (len / 2) + 1;
	}
	if (len % 2 == 0)
		halves = len / 2;

	for (i = 0; i < halves; i++)
	{
		tmp = buf[i];
		buf[i] = buf[len - i - 1];
		buf[len - i - 1] = tmp;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			buf[i] = 0;
		sum += buf[i];
	}
	return (sum);
	free(buf);
}

/**
* binary_to_uint - function to add binary numbers
*	in  string that aren't zero to the power of 2
* @b: binary string to be converted to numbers
* Return: function that returns sum
*/
unsigned int binary_to_uint(const char *b)
{
	int *buffer, len, n = 0, i, base = 2;

	len = strlen(b);

	buffer = malloc(sizeof(int) * len);

	if (buffer == NULL)
		return (1);

	for (i = 0; i < len; i++)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
			return (0);

		n += 1;
		buffer[i] = n;
		if (n > 1)
		{
			buffer[i] = buffer[i - 1] * base;
		}
	}
	return (swapbuffer(buffer, len, b));
}
