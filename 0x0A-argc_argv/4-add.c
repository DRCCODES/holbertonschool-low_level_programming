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
	long sum;
	
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1, sum = 0; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		if (isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%ld\n", sum);
	return (0);
}
