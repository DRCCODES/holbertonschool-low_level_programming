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
long sum;

if (argc < 2)
{
printf("%d\n", 0);
return (1);
}
for (i = 1, sum = 0; i < argc; i++)
{
if (!check_D(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%ld\n", sum);
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
