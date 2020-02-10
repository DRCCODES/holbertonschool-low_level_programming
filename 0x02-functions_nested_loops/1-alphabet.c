#include "holberton.h"
/**
 * print_alphabet - prints a - z lower case
 *
 * Return: Always 0 Success
 */

void print_alphabet(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
	{

		_putchar (l);

	}

	_putchar ('\n');

}
