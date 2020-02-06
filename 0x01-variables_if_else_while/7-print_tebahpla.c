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
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
		putchar (n);
	putchar ('\n');
	return (0);
}
