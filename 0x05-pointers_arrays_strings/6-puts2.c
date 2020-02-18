#include "holberton.h"

/**
 * puts2 - print everyother number
 *
 * @str: the str printed from
 *
 * Return: N/A
 *
 */

void puts2(char *str)
{
char *n = str;
int i = 0;
int j = 0;

	while (*str)
	{
		i++;
		str++;
	}
	while (j < i)
	{
		_putchar(n[j]);
		j++;
		j++;
	}
	_putchar('\n');
}
