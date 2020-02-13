#include "holberton.h"
/**
 * print_triangle - prints a triangle of size, size
 *
 * @size: size of triangle
 *
 * Return: N/A
 */

void print_triangle(int size)
{
int x, y;
if (size > 0)
{
for (y = 1; y <= size; y++)
{
for (x = 1; x <= size; x++)
{
if (x <= size - y)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
_putchar('\n');
}
