#include "holberton.h"
/**
 * _islower - 1 if character is lower, 0 if other
 *
 * @c: checks if character is lower or not.
 * Description: checks if input is lower case or not
 *
 * Return: Always 1 or 0
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}

