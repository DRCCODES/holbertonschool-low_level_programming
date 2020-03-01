#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_D(char *s);
/**
 * main - add numbers if positive
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1 if negative or non digit.
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;

for (i = 1; i < argc; i++)
{
if (check_D(argv[i]))
{
	sum += atoi(argv[i]);
}
else
{
	printf("Error\n");
	return (1);
}
}
printf("%d\n", sum);
return (0);
}

/**
 * check_D - checks substr for nondigit
 * @s: the substring
 * Return: 0 or 1
 */

int check_D(char *s)
{
int j;

for (j = 0; s[j] != '\0'; j++)
{
if (!isdigit(s[j]))
return (0);
}
return (1);
}
