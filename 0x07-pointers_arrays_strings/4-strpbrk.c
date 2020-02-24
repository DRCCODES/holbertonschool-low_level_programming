#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: str to search
 * @accept: chars to look for
 * Return: matched segment
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
char *k;
i = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
k = &s[i];
return (k);
}
j++;
}
i++;
}
return (0);
}
