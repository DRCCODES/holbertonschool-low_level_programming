#include <stdio.h>
#include "holberton.h"


/**
  * binary_len - get length of binary version of num
  * @n: the number
  * @c: the count set to 1
  * Return: c
  */

int binary_len(unsigned long int n, unsigned long int c)
{
	if (n > 1)
	return (1 + binary_len(n >> 1, c));
	return (c);
}


/**
 * get_bit - get value of bit at index
 * @n: the num to look at
 * @index: loction to look at for bit value
 * Return: -1 or bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	unsigned  int len = binary_len(n, 1);

	if (len < index)
	{
	return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
