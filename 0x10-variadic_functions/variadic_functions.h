#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct op - points to list of args in op_t
 * @op: operator points to column 0 opt_t
 * @f: points to functions in coumn 1 op_t 
 *
 */

typedef struct op
{
	char *op;
	void (*f)();
} op_t;

void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void _putchar(char);

#endif
