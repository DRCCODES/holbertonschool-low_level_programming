#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main - Point Of Entry
 *
 *Description: Program prints out three digit combinations without repeates
 *
 *Return: Returns 0 upon success
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)

		for (k = j + 1; k < 10; k++)
		{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (i < 7)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}

	putchar('\n');
	return (0);
}
