#include <stdlib.h>
#include <stdio.h>

/**
  * main - print argument
  * @argc: the counter
  * @argv: holds input
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
