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

int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
