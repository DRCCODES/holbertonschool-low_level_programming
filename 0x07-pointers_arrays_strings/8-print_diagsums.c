#include "holberton.h"

/**
 * print_diagsums - prints sume of digainal digits
 * @a: the 2d array
 * @size : size of 2d array
 * Return: N/A
 */

void print_diagsums(int *a, int size)
{
int suma = 0;
int sumb = 0;
int i = 0;
int h = 0;

while (i < (size * size))
{
h = a[i];
suma = suma + h;
i = i + (size + 1);
}
i = size - 1;
while (i < ((size * size) - 1))
{
h = a[i];
sumb = sumb + h;
i = i + (size - 1);
}
printf("%d, %d\n", suma, sumb);
}
