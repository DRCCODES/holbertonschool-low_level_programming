#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints decimal num as binary
 * @num: number to print out in binary
 * Return: N/A
 */

void print_binary(unsigned long int num)
{
	unsigned long  int mask = 32768;

	int t = 0;

	if (num == 0)
	{
	_putchar('0');
	}
	while (mask > 0)
	{
	if ((num & mask) == 0 && t != 1)
	{
	mask = mask >> 1;
	continue;
	}
	if (num & mask)
	{
	t = 1;
	_putchar('1');
	}
	else
	_putchar('0');
	mask = mask >> 1;
	}
}
