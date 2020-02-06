#include <stdio.h>

/**
 *main - Point Of Entry
 *
 *Description: Program prints 0-9
 *
 *Return: Returns 0 upon success
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar("0" + n);
	putchar('\n');
	return (0);
}
