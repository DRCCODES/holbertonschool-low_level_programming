#include "holberton.h"

/**
  * print_line - prints n number of lines if n > 0
  *
  * @n: number of _ to be printed
  *
  * Return: Nothing
  */

void print_line(int n)
{

	while (n > 0)
	{

		_putchar('_');
		n--;

	}
	_putchar('\n');

}
