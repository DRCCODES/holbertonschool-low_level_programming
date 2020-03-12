#include "function_pointers.h"
#include "stdlib.h"
/**
 * int_index - searches for integer
 * @array: holds the int to search for
 * @size: size of the array
 * @cmp: pointer to function
 * Return: -1 fails index if found
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
	if ((*cmp)(array[i]) != 0)
	return (i);
	}
return (-1);

}
