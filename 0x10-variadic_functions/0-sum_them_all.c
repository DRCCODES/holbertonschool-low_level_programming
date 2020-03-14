#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all the arguments
 * @n: the arguments
 *
 * Return: Sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list list;
	int total;
	unsigned int i;

	total = 0;


	va_start(list, n);

	if (n == 0)
	{
	return (0);
	}

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(list, unsigned int);
	}

va_end(list);

return (total);
}
