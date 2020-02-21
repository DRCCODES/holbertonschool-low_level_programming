#include "holberton.h"

/**
 * rot13 - simeply rotate 13 letters
 *
 * @str: the str to alter
 *
 * Return: str
 */
char *rot13(char *str)
{
	char r[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char R[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; r[j] != '\0'; j++)
	{
		if (str[i] == r[j])
	{
		str[i] = R[j];
		break;
	}

	}

	}
	return (str);
}
