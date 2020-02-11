#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - add or subtract until number (n) reaches 98
 *
 * @n: number to be brought to 98
 *
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
		else
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
	
	}		
	printf("%d", n);
	putchar('\n');
	
	
}
