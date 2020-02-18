#include "holberton.h"

/**
 * puts_half - prints out last half of string
 *
 * @str: string of characters to be printed
 *
 * Return: N/A
 */

void puts_half(char *str)
{
	int i;
	int j;

	while (str[i] != '\0')
	{
	i++;
	}

	if (i % 2 != 0)
	{
	j = (i - 1);
	j = j / 2;
	}
	else
	{
	j = i - (i / 2);
	}
	while (j < i)
	{
	_putchar(str[j]);
	j++;

	}
_putchar('\n');
}
