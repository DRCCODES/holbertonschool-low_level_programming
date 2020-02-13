#include "holberton.h"

/**
 * print_numbers - prints 0-9
 *
 * Return: Nothing is returned
 */

void print_numbers(void)
{

	int i;

	while (i < 10)
	{
		_putchar('0' + i);

		i++;

	}

	_putchar('\n');

}
