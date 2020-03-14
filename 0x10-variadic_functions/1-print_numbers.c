#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the numbers
 * @separator: str seperaters nums
 * @n: numbers
 * Return: N/A
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
int t;
unsigned int i;
va_start(list, n);

	for (i = 0; i < n; i++)
	{
		t = va_arg(list, int);
		printf("%d", t);
		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
printf("\n");
va_end(list);
}
