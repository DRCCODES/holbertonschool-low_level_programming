#include "holberton.h"

/**
 * wildcmp - compares one str to another
 * @s1: main str to for comapring
 * @s2: second str may have *
 * Return: 1 or 0, identical or not
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0' && *s1 == '\0')
{
return (1);
}
if (*s1 == '\0' && *s2 == '*')
{
return (wildcmp(s1, (s2 + 1)));
}
if (*s1 == *s2)
{
return (wildcmp((s1 + 1), (s2 + 1)));
}
if (*s1 == '\0' || *s2 == '\0')
{
return (0);
}
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, (s2 + 1)));
if (wildcmp(s1, s2 + 1))
return (1);
else
return (wildcmp(s1 + 1, s2));
}
return (0);
}
