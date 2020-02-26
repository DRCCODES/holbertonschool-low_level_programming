#include "holberton.h"

/**
 * _pow_recursion - pow done recursivly
 * @x: the base number
 * @y: the power to raise x to
 * Return: x to power y or -1 if  y < 0.
 *
 */

int _pow_recursion(int x, int y)
{
if (y > 0)
return (x * _pow_recursion(x, y - 1));
else if (y == 0)
return (1);
else
return (-1);
}
