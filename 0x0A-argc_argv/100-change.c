#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * change - calcs min num coins to make
 * @k: the amount
 * @s: the coint counter
 * @j: index num
 * Return: 0 or 1
 */

int change(int k, int s, int j)
{
int coins[5] = {25, 10, 5, 2, 1};

if (k == 0)
{
return (s);
}
if (k >= coins[j])
{
k = k - coins[j];
return (change(k, s + 1, j));
}
j++;
return (change(k, s, j));
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

/**
 * main - passes arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
if (argc < 2 && argc >= 1)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
if (!check_D(argv[1]))
{
printf("Error\n");
return (1);
}
printf("%d\n", change(atoi(argv[1]), 0, 0));
return (0);
}
