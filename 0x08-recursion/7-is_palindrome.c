#include "holberton.h"
/**
 * _strlen - return lenght of str.
 * @s: str to be measured
 * Return: lengths of string
 */
int _strlen(char *s)
{
if (*s != '\0')
{
return (1 + _strlen(s + 1));
}
else
{
return (0);
}
}


/**
 * pdrome - checks for palandrome
 * @c: str to check
 * @x: index that advances
 * @y: index that decreases
 * Return: 1 or 0
 *
 */

char pdrome(char *c, int x, int y)
{
if (x == y)
return (1);
if (c[x] != c[y])
return (0);
if (x < y + 1)
return (pdrome(c, x + 1,  y - 1));
return (1);
}
/**
 * is_palindrome - checks for palandrome
 * @s: str to check
 * Return: 1 or 0
 *
 */
int is_palindrome(char *s)
{
int size = _strlen(s);
if (size == 0)
return (1);
return (pdrome(s, 0, size - 1));
}
