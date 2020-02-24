#include "holberton.h"

/**
 * _strspn - searches str for match segment
 * @s: str to search
 * @accept: chars to look for
 * Return: bytes of matched segment
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int c;

i = 0;
c = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
c++;
break;
}
j++;
}
if (accept[j] == '\0')
break;

i++;
}
return (c);
}
