#include "holberton.h"

/**
 * _strncat - copy n number of bytes from src
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

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
if (j > n - 1)
{
break;
}
dest[i] = src[j];
i++;
j++;

}
dest[i] = '\0';
return (dest);
}
