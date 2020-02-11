#include "holberton.h"

/**
 * print_last_digit - grabs last digit of number
 *
 * @n: holds number to grab last digit from
 *
 * Return: ld.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int tv = ((n % 10) * -1);

		_putchar('0' + tv);
		return (tv);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
