#include "holberton.h"

/**
 * leet - To Leet
 *
 * @str: str to be |_[-[-'|'[-|)
 *
 * Return: str
 *
 */


char *leet(char *str)
{
int i;
int j;
char la[] = "aeotlAEOTL";
char ln[] = "4307143071";

for (i = 0; str[i]; i++)
{
for (j = 0; la[j] != '\0'; j++)
{
if (str[i] == la[j])
{
str[i] = ln[j];
}
}
}
	return (str);
}
