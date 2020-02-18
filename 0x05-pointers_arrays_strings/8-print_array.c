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

	while (i < n - 1)
	{
	printf("%d, ", a[i]);
	i++;
	}
	printf("%d", a[i]);
	printf("\n");
}
