#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints decimal num as binary
 * @n: number to print out in binary
 * Return: N/A
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
