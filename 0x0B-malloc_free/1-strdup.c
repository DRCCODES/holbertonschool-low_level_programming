#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates str
 * @str: the str to duplicate
 * Return: Null or pointer
 */
char *_strdup(char *str)
{
char *p;
int i;
int size = 0;

if (str == 0)
return (NULL);

while (*(str + size) != '\0')
{
size++;
}
size++;

p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);

for (i = 0; *(str + i) != '\0'; i++)
{
*(p + i) = *(str + i);
}

*(p + i) = '\0';
return (p);
}
