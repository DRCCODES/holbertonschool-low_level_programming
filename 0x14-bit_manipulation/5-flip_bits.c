#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - counts and returns number of bits the need to be flipped
 * @n: The original number
 * @m: The number to flip to
 * Return: bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int csb;

	csb = n ^ m;

	while (csb > 0)

		if (csb & 1)
		count++;

		c = c >> 1;

	return (count);
}
