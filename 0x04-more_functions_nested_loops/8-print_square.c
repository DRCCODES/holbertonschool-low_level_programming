#include "holberton.h"

/**
  * print_square - prints square of a certain size
  *
  * @size: size of square
  *
  * Return : N/A
  */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
		}
		else
		{
	_putchar('\n');
	}
}
