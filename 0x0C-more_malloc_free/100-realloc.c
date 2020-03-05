#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloc memory
 * @ptr: the pointer
 * @old_size: the old size of pointer
 * @new_size: new size to allot
 * Return: NULL,ptr and or new_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *ptrNew;

if (ptr == NULL)
	{
ptrNew = malloc(new_size);
if (ptrNew == NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (ptrNew);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (!ptr)
{
return (malloc(new_size));
}
else if (new_size == old_size)
{
return (ptr);
}
else
{

if ((ptr) && (new_size > old_size))
ptrNew = malloc(new_size);

if (ptrNew)
{
memcpy(ptrNew, ptr, old_size);
free(ptr);
}
return (ptrNew);
}
}
