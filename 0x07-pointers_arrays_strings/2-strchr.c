#include "holberton.h"

/**
 * _strchr - searches str
 * @s: str to search
 * @c: character to look for
 * Return: rest of str after find or NULL.
 */

char *_strchr(char *s, char c)
{
	unsigned int j;
	char *k;
	int count = 0;

	while (*s)
	{
	if (*s == c)
	{
	k = s;
	break;
	}
	s++;
	}
	return (k);
}

