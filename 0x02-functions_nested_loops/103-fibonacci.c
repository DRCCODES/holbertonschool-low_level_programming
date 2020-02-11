#include <stdio.h>

/**
 *main- prints sum of even terms limit 4000000
 *
 *Return: 0
 */

int main(void)
{

	unsigned long int i;

	unsigned long int n;

	unsigned long int t1 = 1;

	unsigned long int t2 = 2;

	unsigned long int nextTerm;

	unsigned long int even = 0;

	while (t1 < 4000000 && t2 < 4000000)
	{
	if ((t2 % 2) == 0)
		even += t2;
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%ld ", even);
	putchar('\n');
	return (0);
}
