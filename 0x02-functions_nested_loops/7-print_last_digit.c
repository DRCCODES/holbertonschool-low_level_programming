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
		n = (n % 10) * -1;
		
		_putchar('0' + n);
		return (n);
	}
	else 
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
