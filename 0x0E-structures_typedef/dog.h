#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs attributes defined
 * @name: dog name str
 * @age: float age of dog
 * @owner: owner name str
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
