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

unsigned int i;
va_list list;
unsigned int total;


total = 0;


va_start(list, n);

if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
total = total + va_arg(list, int);
va_end(list);
return (total);
}
