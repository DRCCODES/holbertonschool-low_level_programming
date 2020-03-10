#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return lenght of str.
 * @s: str to be measured
 *
 * Return: lengths of string
 *
 */

int _strlen(char *s)
{
if (*s != '\0')
{
return (1 + _strlen(s + 1));
}
else
{
return (0);
}
}

/**
 * _strcpy - create a copy of a string
 * @src: Contains the original string
 * Return: Gives back the copy of string
 */
char *_strcpy(char *src)
{
	int i;
	int len;
	char *dest;

	len = _strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - makes a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: A pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cpyn;
	char *cpyo;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	cpyo = _strcpy(owner);

	if (cpyo == NULL)
	{
		free(d);
		return (NULL);
	}

	cpyn = _strcpy(name);
	if (cpyn == NULL)
	{
		free(cpyo);
		free(d);
		return (NULL);
	}
	d->name = cpyn;
	d->age = age;
	d->owner = cpyo;
	return (d);
}
