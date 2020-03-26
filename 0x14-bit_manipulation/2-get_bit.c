#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get value of bit at index
 * @n: the num to look at
 * @index: loction to look at for bit value
 * Return: -1 or bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (sizeof(n) * 8 < index)
	{
	return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
