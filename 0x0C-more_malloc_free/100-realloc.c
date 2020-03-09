#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memcpy -copies using pointers
 * @dest: where to copy to
 * @n: the size of the memory to print
 * @src: source to copy from
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *csrc = (char *)src;
char *cdest = (char *)dest;
for (i = 0; i < n ; i++)
cdest[i] = csrc[i];
return (dest);
}

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
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptrNew = malloc(new_size);
if (ptrNew == NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
_memcpy(ptrNew, ptr, old_size);
free(ptr);
return (ptrNew);
}

