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

	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	while (i >= 0)
	{
	i = i - 1;
	_putchar(s[i]);
	i--;
	}
	_putchar('\n');
}
