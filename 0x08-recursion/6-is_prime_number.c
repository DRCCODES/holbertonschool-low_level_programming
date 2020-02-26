#include "holberton.h"

/**
 * isPrime - return sqrt or -1 if no natural sqrt
 * @i: number to increaase for checks
 * @num: number to check for primeness
 * Return: 0 or 1
 *
 */

int isPrime(int num, int i)
{
if (num <= 1)
return (0);
if (num % i == 0)
return (0);
if (i * i > num)
return (1);
else
return (isPrime(num, i + 1));
}
/**
 * is_prime_number - return sqrt or -1 if no natural sqrt
 * @n: num to check
 *
 * Return: 1 if prime 0 if not
 *
 */
int is_prime_number(int n)
{
return (isPrime(n, 2));
}
