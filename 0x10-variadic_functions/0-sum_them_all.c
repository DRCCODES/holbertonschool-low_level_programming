#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - add all the arguments
 * @n: the arguments
 *
 * Return: Sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{

  va_list list;
  int sum = 0;
  unsigned int i;

  va_start(list, n);

  if (n == 0)
    {
      return (0);
    }

  for (i = 0; i < n; i++)
    {
      sum = sum + va_arg(list, int);
    }

  va_end(list);

  return (sum);
}
