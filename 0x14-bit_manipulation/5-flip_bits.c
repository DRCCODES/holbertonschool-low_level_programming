#include <stdio.h>
#include "holberton.h"

/**
 * csb - count set bits
 * @n: the number to count
 * Return: count
 */

int csb(unsigned long int n)
{
	unsigned long int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - counts and returns number of bits the need to be flipped
 * @n: The original number
 * @m: The number to flip to
 * Return: bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (csb(n ^ m));
}
