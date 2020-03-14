#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints char
 * @list: args
 * Return: N/A
 */

void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * print_float - prints float int
 * @list: args
 * Return: N/A
 */

void print_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_int - prints int
 * @list: args
 * Return: N/A
 */

void  print_int(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 * print_string - prints str
 * @list: args
 * Return: N/A
 */

void print_string(va_list list)
{
char *ptr_string;

ptr_string = (va_arg(list, char*));
if (ptr_string == NULL)
{
ptr_string = "(nil)";
}
printf("%s", ptr_string);
}

/**
 * print_all - prints it all
 * @format: args passed to function
 * Return: N/A
 */

void print_all(const char * const format, ...)
{

op_t fmt[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};

va_list list;
int i, j;
char *separator = "";

va_start(list, format);
i = 0;
while (format[i] != '\0')
{
j = 0;
while (fmt[j].op != NULL)
{
if (format[i] == fmt[j].op[0])
{
printf("%s", separator);
fmt[j].f(list);
separator = ", ";
}
j++;
}
i++;
}
va_end(list);
printf("\n");
}
