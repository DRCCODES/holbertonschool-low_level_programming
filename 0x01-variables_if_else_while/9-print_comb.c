#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Point Of Entry
 *
 *Description: Program prints 0-9 wiht ,s
 *
 *Return: Returns 0 upon success
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar (n);


		if (n != '9')
		{
			putchar (',')
			putchar (' ');

		}
		n++
	}
	putchar ('n');
	return (0);
}
