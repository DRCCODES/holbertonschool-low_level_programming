#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main - Point Of Entry
 *
 *Description: Program prints out 2 digit combinations without repeates
 *
 *Return: Returns 0 upon success
 */
int main(void)
{
	int i = 0;
	int j = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)

		{
		putchar(i + '0');
		putchar(j + '0');

		if (i < 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}

	putchar('\n');
	return (0);
}
