#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: str to search
 * @needle: chars to look for
 * Return: matched segment
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int c = 0;
	char *k;

while (haystack[i] != '\0')
{
j = 0;
while (needle[j + c] != '\0' && haystack[i + c] != '\0'
&& needle[j + c] == haystack[i + c])
{
if (haystack[i + c] != needle[j + c])
{
break;
}
c++;
}
if (needle[j + c] == '\0')
{
k = &haystack[i];
return (k);
}
j++;
i++;
}
return (0);
}
