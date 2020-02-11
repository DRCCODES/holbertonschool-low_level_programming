#include "holberton.h"

/**
 * times_table - print time tables 0-9
 *
 * Return: Always 0.
 */


void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
	for (j = 0; j < 10 ; j++)
	{
		if ((i * j) < 10)
		{
		_putchar('0' + ((i * j) % 10));
		if (j < 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		}
		else
		{
		_putchar('0' + ((i * j) / 10));
		_putchar('0' + ((i * j) % 10));
		if (j < 9)
		{
		_putchar(',');
		_putchar(' ');
		}

		}
	}
	_putchar('\n');
	}


}
