#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 * @n: the number to switch bit in
 * @index: location if bit to switch
 * Return: 1 or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	*n | = (n | (1 << index));

	return (1);
}
