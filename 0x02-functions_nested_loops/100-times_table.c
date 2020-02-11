#include "holberton.h"

/**
 * print_times_table - print time tables n
 * @n: who many tables to be prtined from 0 to n
 * Return: Always 0.
 */

void print_times_table(int n)
{
int i;
int j;
int k;

if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
k = i * j;
if (k >= 10 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (k / 10));
_putchar('0' + (k % 10));
}
if (k >= 100)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (k / 100));
_putchar('0' + ((k / 10) % 10));
_putchar('0' + (k % 10));
}
if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + k);
}
}
_putchar('\n');
}
}
}
