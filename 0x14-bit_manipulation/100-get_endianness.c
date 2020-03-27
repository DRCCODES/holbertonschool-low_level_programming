#include <stdio.h>
#include "holberton.h"

/**
  * get_endianness - checks endianness of machine
  *
  * Return: 0 or 1
  */

int get_endianness(void)
{
	unsigned int x = 0x76543210;

	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
