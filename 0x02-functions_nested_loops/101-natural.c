#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Descirption : Prints sum of all multiples of 3 and 5 under 1024
 *
 *
 * Return: Always 0 For Success
 */

int main(void)
{
	int n;
	int sum;

	for (n = 3; n < 1024; n++)
	{
	if (n % 5 == 0 || n % 3 == 0)
	{
		sum += n;
	}

	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
