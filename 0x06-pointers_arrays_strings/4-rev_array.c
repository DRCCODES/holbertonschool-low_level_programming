#include "holberton.h"

/**
 * reverse_array - yarra_esrever
 *
 * @a: the array to reverse
 *
 * @n: size of array
 *
 * Return: N/A
 *
 */

void reverse_array(int *a, int n)
{
int j = n - 1;
int tmpi;
int k;
n = 0;
while (n < j)
{
tmp = a[n];
a[n] = a[j];
a[j] = tmp;
n++;
j--;
}
}
