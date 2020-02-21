#include "holberton.h"

/**
 * _strcmp - compares strs like library strcmp
 *
 * @s1: main str compared too
 *
 * @s2: str compard to s1
 *
 * Return: s1 - s2
 *
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] == s2[i]; i++)
{
	if (s1[i] == '\0')
	{
		break;
	}

}

return (s1[i] - s2[i]);
}
