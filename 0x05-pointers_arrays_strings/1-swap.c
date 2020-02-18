#include "holberton.h"

/**
 * swap_int - swap a = b and b = a.
 * @a: first int
 * @b: second int
 * Return: N/A
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;

}
