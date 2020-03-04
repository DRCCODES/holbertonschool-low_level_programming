#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - stores arguments in new pointer
 * @ac : counter
 * @av : holds arguemnts
 * Return: Always pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	char *p;
	char *final;
	int i;
	int j;
	int size;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0, size = 0; i < ac; i++)
{
for (j = 0; *(*(av + i) + j) != '\0'; j++, size++)
;
size++;
}
size++;
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);

final = p;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*p = av[i][j];
p++;
}
*p = '\n';
p++;
}
return (final);
}
