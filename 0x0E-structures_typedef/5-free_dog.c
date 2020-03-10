#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the dog, pointer to struct
  * @d: the pointer to a struct
  * Return: N/A
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->name);
	free(d->owner);
	free(d);
}
