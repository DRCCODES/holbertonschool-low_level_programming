#include <stdio.h>

/**
 *main- prints sum of even terms limit 4000000
 *
 *Return: 0
 */

int main(void)
{

	int i;

	int n;

	int t1 = 1;

	int t2 = 2;

	int nextTerm;

	int even = 0;

	while (t1 < 4000000 && t2 < 4000000)
	{
	if ((t2 % 2) == 0)
		even += t2;
	nextTerm = t1 + t2;
	t1 = t2;
	t2 = nextTerm;
	}
	printf("%d\n", even);

	return (0);
}
