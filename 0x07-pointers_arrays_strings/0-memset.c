#include "holberton.h"

/**
 * _memset - fills the memory block at address
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the buffer
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = b
;
	for (i = 0; i < n; i++)
	memory[i] = value;
	return (memory);
}
