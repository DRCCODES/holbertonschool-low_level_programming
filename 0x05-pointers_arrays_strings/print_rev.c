#include "holberton.h"

/**
 * print_rev - print a str in reverse
 * @s: str to me reversed
 *
 * Return: N/A
 *
 */

void print_rev(char *s)
{
	char *n = s;
	int j;
	int i = 0;

	while (*s)
	{
	i++;
	s++;
	}
	while (i >= 0)
	{
	_putchar(n[i]);
	i--;
	}
	_putchar('\n');
}
