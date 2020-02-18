#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print an array
 *
 * @a: array to draw from
 *
 * @n: index to print
 *
 * Return: N/A
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");

}
