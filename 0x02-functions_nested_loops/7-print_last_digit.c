#include "holberton.h"

/**
 * print_last_digit - grabs last digit of number
 *
 * @ld: holds number to grab last digit from
 *
 * Return: ld.
 */

int print_last_digit(int ld)
{
	if (ld < 0)
	{
		ld = (ld * -1);
		ld = (ld % 10);
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		ld = (ld % 10)
		_putchar('0' + ld);
		return (ld);
	}
}
