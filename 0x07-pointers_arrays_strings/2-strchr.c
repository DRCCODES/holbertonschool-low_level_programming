#include "holberton.h"

/**
 * _strchr - searches str
 * @s: str to search
 * @c: character to look for
 * Return: rest of str after find or NULL.
 */

char *_strchr(char *s, char c)
{

	char *k;

	while (*s)
	{
	if (*s == c)
	{
	k = s;
	return (k);
	}
	s++;
	}
	return (0);
}

