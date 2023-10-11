#include <stdio.h>
#include "main.h"

/**
 * jack_bauere - Prints every minute of the day of from 00:00 to 23:59.
 *
 * Return: Always 0 (Success)
 */


int jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}

	return (0);
}
