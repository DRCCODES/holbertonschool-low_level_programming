#include "holberton.h"

/**
 * _puts - print out a string
 *
 * @str: Str to print
 *
 * Return: N/A
 *
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
	_putchar(*str++);
	}
}
