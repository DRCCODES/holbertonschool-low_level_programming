#include "holberton.h"

/**
 * _isupper - checks if char is upper
 * @c: The character checked for upper
 *
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{

		return (1);

	}
	else
	{
		return (0);

	}

}
