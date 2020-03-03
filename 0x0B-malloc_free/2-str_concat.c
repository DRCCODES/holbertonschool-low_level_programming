#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats a str
 * @s1: the 1st str
 * @s2: the 2nd str
 * Return: Null or pointer.
 */

char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int j;
int size = 0;
int size2 = 0;

if (s1 == 0 || s2 == 0)
return (NULL);

while (*(s1 + size) != '\0')
{
size++;
}

while (*(s2 + size2) != '\0')
{
size2++;
}

p = malloc((size + size2) *sizeof(char));
if (p == NULL)
return (NULL);

for (i = 0; *(s1 + i) != '\0'; i++)
{
*(p + i) = *(s1 + i);
}

for (j = 0; *(s2 + j) != '\0'; j++)
{
*(p + i) = *(s2 + j);
i++;
}
return (p);
}
