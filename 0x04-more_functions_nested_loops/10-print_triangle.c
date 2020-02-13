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
{
int x, y;
if (size > 0)
{
for (y = 0; y < size; y++)
{
for (x = 0; x <= y; x++)
{
_putchar('*');
}
_putchar('\n');
}
}
_putchar('\n');
}
}
