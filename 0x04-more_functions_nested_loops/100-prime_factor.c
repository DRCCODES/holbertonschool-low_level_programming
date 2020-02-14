#include <stdio.h>

/**
  * main - Entry Point
  &
  * Description: Finds largest prime factor by divison
  *
  * Return: 0
  */

int main(void)
{
	long int d, n, lp;

	n = 612852475143;

	for (d = 2; d < n; d++)
	{
	while (n % d == 0)
	{
	n = n / d;
	lp = n;
	}
	}
	printf("%ld\n", lp);
	return (0);
}
