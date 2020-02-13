#include "holberton.h"

/**
 * more_numbers - prints 1-14 ten times.
 *
 * Returns: Nothing
 */

void more_numbers(void)
{
	int i;
	int x;

	while (x < 10)
	{
	for (i = 0; i < 15; i++)
	{
	if (i >= 10)
	{
	_putchar('0' + (i / 10));

	}
	_putchar('0' + (i % 10));

	}
	x++;

	_putchar('\n');
	}
}
