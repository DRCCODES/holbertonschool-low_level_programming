#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - converts str to int
 *
 * @s: the str
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
int res = 0;
int sign = 1;
int i = 0;
int pos = 0;
int neg = 0;

for (i = 0; s[i] != '\0'; ++i)
if (s[i] == '-')
{
neg++;
}
else if (s[i] == '+')
{
pos++;
}
else if (s[i] >= '0' && s[i] <= '9')
{
res = res * 10 +  s[i] - '0';
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
if (neg > pos)
{
sign = -1;
}
else
{
sign = 1;
}
return (sign *res);
}
