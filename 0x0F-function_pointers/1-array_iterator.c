#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - goes over array
 * @array: the array
 * @size: size of array
 * @action: the function pointed too
 * Return: Nothing.
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL || size <= 0)
	return;

	for (i = 0; i < size; i++)
	{
	(*action)(array[i]);
	}

}
