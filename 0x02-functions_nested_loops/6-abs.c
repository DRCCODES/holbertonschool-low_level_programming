#include "holberton.h"
/**
 * _abs - absolute value get.
 * @ab: number to get abs from
 * Return: Always 0.
 */
int _abs(int ab)
{
	if (ab < 0)
		ab = (ab * (-1));
	return (ab);
}
