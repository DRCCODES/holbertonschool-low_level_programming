#include <stdio.h>

/**
 *main- prints sum of even terms limit 4000000
 *
 *Return: 0
 */

int main(void)
{

	long i = 1;

	long n = 2;

	long nextTerm;

	long even = 0;

	while (i < 4000000 && n < 4000000)
	{
	if ((n % 2) == 0)
		even += n;
	nextTerm = i + n;
	i = n;
	n = nextTerm;
	}
	printf("%ld\n", even);

	return (0);
}
