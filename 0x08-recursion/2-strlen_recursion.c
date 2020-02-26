#include "holberton.h"

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
