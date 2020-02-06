#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Point Of Entry
 *
 *Description: Program prints base 16 0-f
 *
 *Return: Returns 0 upon success
 */

int main(void)
{

	int n;
	char a;

	for (n = 0 ; n < 10 ; n++)
		putchar ('0' + n);
	for (a = 'a' ; a < 'g' ; a++)
		putchar (a);

	putchar ('\n')
	return (0);
}
