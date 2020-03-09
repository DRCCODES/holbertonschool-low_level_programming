/**
  * main - print num of arguments
  * @argc: the count
  * @argv: the array
  * Return: 0
  */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
