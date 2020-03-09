#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initalizes dog struct
  * @d: dog
  * @name: name of dog
  * @age: ago of dog
  * @owner: name of owner
  * Return: N/A
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
