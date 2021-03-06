#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints out if random number is positive, negative or zero
 *
 *Return: Returns 0 upon success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n);
	putchar('\n');
	return (0);
}
