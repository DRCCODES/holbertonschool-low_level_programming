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
	unsigned int size = n;
	unsigned  int len = 0;

	while (size > 0)
	{
	size = size / 10;
	len++;
	}
	if (len < index || index < 0)
	{
	return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
