#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Point of Entry
 *
 *Description: Prints if n is + . - or 0
 *
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("is negative");
	else if (n == 0)
		printf("is zero");
	else
		printf("is positive");
	return (0);
}
