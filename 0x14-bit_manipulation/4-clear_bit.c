#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clear bit at index.
 * @n: the number to switch bit in
 * @index: location if bit to switch
 * Return: 1 or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
