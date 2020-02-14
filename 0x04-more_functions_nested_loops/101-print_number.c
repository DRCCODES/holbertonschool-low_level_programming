#include "holberton.h"

/**
 * print_number - prints out a number, digit by digit
 *
 * @num: the number
 *
 * Return: Void does not return
 */

void print_number(int num)
{
	unsigned int n;
	int z = 1;
	unsigned int d;

	if (num < 0)
	{
		n = num * -1;
		_putchar('-');
	}
	else if (num == 0)
	{
		_putchar('0' + num);
		return;
	}
	else
	{
		n = num;
	}

	while ((n / z) > 9)
		z = z * 10;
	while (z >= 1)
	{
		d = n / z;
		_putchar('0' + (d % 10));
		z = z / 10;
	}
}
