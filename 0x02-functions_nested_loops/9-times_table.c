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
	int k;

	for (i = 0; i < 10; i++)

	{
		for (j = 0; j < 10 ; j++)
		{
		k = i * j;
		if ((k) < 10)
		{
			_putchar(' ');
			_putchar('0' + ((k) % 10));
		}
		else if (j == 0)
		{
		_putchar('0' + k);
		}
		else
		{
		_putchar('0' + ((k) / 10));
		_putchar('0' + ((k) % 10));
		}
		if (j == 9)
		{
		_putchar('\n');
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		}
	}

	}


}
