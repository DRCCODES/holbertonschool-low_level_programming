#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: counter of arguments
  * @argv: holds arguments
  * Return: 0 or hex values
  */

int main(int argc, char *argv[])
{
	int opn;
	int i;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opn = atoi(argv[1]);


	for (i = 0; i < opn - 1; i++)
	{
		printf("%02hhx ", ptr[i]);
	}

	printf("%02hhx\n", ptr[i]);
	return (0);
}
