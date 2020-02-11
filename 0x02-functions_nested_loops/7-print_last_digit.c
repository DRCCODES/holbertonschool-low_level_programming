#include "holberton.h"

/**
 * print_last_digit - grabs last digit of number
 *
 * @ld: holds number to grab last digit from
 *
 * Return: Always 0.
 */

int print_last_digit(int ld)
{
	if (ld < 0)
		ld = (ld * (-1));

	_putchar('0' + (ld % 10));
}
