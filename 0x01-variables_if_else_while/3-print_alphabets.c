#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Point Of Entry
 *
 *Description: Program prints  a-z then A-Z
 *
 *Return: Returns 0 upon success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
