#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Point Of Entry
 *
 *Description: Program two digits 00 - 99
 *
 *Return: Returns 0 upon success
 */

int main(void)
{
	int n = 0;

	while (n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');

		if (n != 99)
		{
			putchar(',')
			putchar(' ')
		}
		n++
	}
	putchar ('\n);
	return (0);
}
