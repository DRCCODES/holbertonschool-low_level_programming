#include <stdio.h>

/**
 *main - Point Of Entry
 *
 *Description: Program prints every letter a-z save q & e
 *
 *Return: Returns 0 upon success
 */

int main(void)
{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
		if (ch == 'e' || ch == 'q')
			ch++;
		else
			putchar(ch);
}
	putchar('\n');
	return (0);
}
