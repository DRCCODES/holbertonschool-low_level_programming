#include "holberton.h"

/**
 * check_root - return sqrt or -1 if no natural sqrt
 * @i: number to increaase to check for root
 * @num: number to check i *i against
 * Return: i or -1
 *
 */
int check_root(int i, int num)
{
if (i * i == num)
{
return (i);
}
else if (i * i > num)
{
return (-1);
}
return (check_root(i + 1, num));
}
/**
 * _sqrt_recursion - return sqrt or -1 if no natural sqrt
 * @n: num to check
 *
 * Return: sqrt or -1
 *
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (check_root(1, n));
}
