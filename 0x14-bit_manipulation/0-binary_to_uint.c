#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - binary to decimal
 * @b: the str binary number
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{

	int count = 0;
	unsigned int power = 1;
	unsigned int dec = 0;

	if (b == NULL)
	return (0);

	while (b[count] != '\0')
	{
	count++;
	}

	count--;

	while (count >= 0)
	{
	if (b[count] != '0' && b[count] != '1')
	return (0);

	dec += (b[count] - '0') * power;
	count--;

	power *= 2;
	}
	return (dec);
}
