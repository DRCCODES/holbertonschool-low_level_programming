#include "holberton.h"

/**
 * print_diagonal - print \ n number of times
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (x = 0; x < i; x++)
	{
	_putchar(' ') * x;
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
