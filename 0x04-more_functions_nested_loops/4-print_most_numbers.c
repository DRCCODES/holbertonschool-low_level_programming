#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 save 2 & 4
 *
 * Return: Nothing is returned
 */

void print_most_numbers(void)
{

	int i;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar('0' + i);

			i++;
		}

	}

	_putchar('\n');

}
