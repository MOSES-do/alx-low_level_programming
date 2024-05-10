#include "search_algos.h"
/**
 * binary_search - function to search an array
 *	logarithmacally 0(log n) complexity
 * @array: d.s to be traversed
 * @size: size of the array/no. of element sin the array
 * @value: element to be founs within the array
 * Return: -1 /if element is not found/
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t i = 0;
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
