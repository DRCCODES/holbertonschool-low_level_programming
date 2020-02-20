#include "holberton.h"
/**
 * cap_string - Make Things Like This! Yeah
 *
 * @str: main str to cap!
 *
 * Return: str
 *
 */


char *cap_string(char *str)
{

int i;
int n;
char s[] = {' ', '!', '\n', '"', ',', '(', ')', ';', '.', '{', '}', '\t', '?'};

if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = str[0] - 32;
}

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{

for (n = 0; n < 14; n++)
{
if (str[i - 1] == s[n])
{
str[i] = str[i] - 32;
n = 13;
}

}

}

}
return (str);
}
