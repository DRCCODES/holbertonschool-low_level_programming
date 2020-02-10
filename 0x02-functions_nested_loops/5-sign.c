#include "holberton.h"

/**
 * print_sign - prints 0,- or + along side 1 0 or /
 * @n: item to be checked
 *
 * Return: O
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
