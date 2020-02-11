#include "holberton.h"

/**
 * print_times_table - print time tables n
 * @t: who many tables to be prtined from 0 to n
 * Return: Always 0.
 */

void print_times_table(int t)
{
int i;
int j;
int k;

if (t > 0 && t < 16)
{
for (i = 0; i <= t; i++)
{
_putchar('0');
for (j = 1; j <= t; j++)
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
