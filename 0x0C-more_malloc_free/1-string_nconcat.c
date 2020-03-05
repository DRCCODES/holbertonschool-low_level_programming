#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - return lenght of str.
 * @s: str to be measured
 *
 * Return: lengths of string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	{
	return (0);
	}
}

/**
 * string_nconcat - cpy n bytes to pointer
 * @s1: str to copy
 * @s2: str to cpy n bytes from
 * @n: num of bytes to copy
 *
 * Return: lengths of string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *p;
unsigned int i;
unsigned int j;
unsigned int size;
unsigned int size2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	size = _strlen_recursion(s1);
	size2 = _strlen_recursion(s2);

	if (n >= size2)
	{
	p = malloc((size + size2 + 1) * sizeof(char));
	n = size2;
	}
	else
	p = malloc((size + n + 1) * sizeof(char));
	if (p == NULL)
	return (NULL);

for (i = 0; *(s1 + i) != '\0'; i++)
	{
	*(p + i) = *(s1 + i);
	}

	for (j = 0; j < n; j++)
	{
	*(p + i) = *(s2 + j);
	i++;
	}
	*(p + i) = '\0';
return (p);
}
