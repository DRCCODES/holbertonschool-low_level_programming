#include "holberton.h"

/**
  * create_array - creats an array
  * @size: size of array
  * @c: char to store in array
  * Return: Null or pointer
  */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
*(p + i) = c;
return (p);
}
