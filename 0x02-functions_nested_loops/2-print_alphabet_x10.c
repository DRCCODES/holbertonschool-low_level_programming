#include "holberton.h"

/**
 * print_alphabet_x10 - prints a - z lower case 10X!
 *
 * Return: Always 0 Success
 */

void print_alphabet_x10(void)
{

	char l;
	int c = 0;

	while (c < 10)
	{
	for (l = 'a'; l <= 'z'; l++)
	{

		_putchar (l);

	}

	_putchar ('\n');
	c++;
	}
}
