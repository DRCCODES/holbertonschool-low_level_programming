#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"


/**
 * print_strings - prints str arguments
 * @separator: str separator
 * @n: number of argus
 * Return: N/A
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list list;
char *ptr;
unsigned int i;
va_start(list, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(list, char*);
if (ptr == NULL)
{
printf("(nil)");
}
else
{
printf("%s", ptr);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(list);
printf("\n");
}
