#include "holberton.h"

/**
 * _strncpy - copy n number of bytes from src
 *
 * @dest: main str to copy to
 *
 * @src: str to copy from
 *
 * @n: number of bytes to copy
 *
 * Return: dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{

int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
