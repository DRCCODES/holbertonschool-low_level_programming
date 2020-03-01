#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int j;
	char *s;
	long sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1, sum = 0; i < argc; i++)
	{
	s = argv[i];
	for (j = 0; s[j] != '\0'; j++)

		if (!isdigit(s[j]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%ld\n", sum);
	return (0);
}
