#include "holberton.h"

/**
 * string_toupper - a is A
 *
 * @str: main str compared too
 *
 * Return: str
 *
 */

char *string_toupper(char *str)
{

while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - 32;
}
str++;
}
return (str);
}
