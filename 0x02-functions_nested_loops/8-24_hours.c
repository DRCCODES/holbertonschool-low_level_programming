#include "holberton.h"

/**
 * jack_bauer - 00:00 to 23:59
 *
 * Return: 8
 */

void jack_bauer(void)
{
	int h;
	int j;
	int k;

	for (h = 0; h < 24; h++)
		for (j = 0; j < 6; j++)
		{
			for (k = 0; k < 10; k++)
			{
				_putchar('0' + h / 10);
				_putchar('0' + h % 10);
				_putchar(':');
				_putchar('0' + j);
				_putchar('0' + k);
				_putchar('\n');
			}
		}
}
