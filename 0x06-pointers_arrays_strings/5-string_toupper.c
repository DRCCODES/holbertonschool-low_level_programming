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

int i;

while (str[i] != '\0')
{
if (str[i] > 96)
{
str[i] -= 32;
}
i++;
}
return (str);
}
