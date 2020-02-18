#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * @s: The str to be reversed
 *
 * Return: N/A
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int tmp;

	while (s[i + 1] != 0)
	{
	i++;
	}
	while (j <= i / 2)
	{
	tmp = s[j];
	s[j] = s[i - j];
	s[i - j] = tmp;
	j++;

	}
}
