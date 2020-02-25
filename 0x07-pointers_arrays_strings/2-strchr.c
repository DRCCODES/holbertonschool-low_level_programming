#include "holberton.h"

/**
 * _strchr - searches str
 * @s: str to search
 * @c: character to look for
 * Return: rest of str after find or NULL.
 */

char *_strchr(char *s, char c)
{


	while (*s)
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}

