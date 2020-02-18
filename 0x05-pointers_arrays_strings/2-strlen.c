#include "holberton.h"

/**
 * _strlen - swap a = b and b = a
 * @s: str to find length of.
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
	i++;
	s++;
	}
	return (i);
}
