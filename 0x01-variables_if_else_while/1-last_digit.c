#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Point Of Entry
 *
 *Description: Program prints if last digit is 0, <5 or >5
 *
 *Return: Returns 0 upon success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = abs(n % 10)
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", x);

	return (0);
}
