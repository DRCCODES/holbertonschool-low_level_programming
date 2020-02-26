/**
 * factorial - return factorial of n.
 * @n: num to factorial to
 *
 * Return: factorial
 *
 */

int factorial(int n)
{
if (n <= 0)
return (-1);
else
return (n * factorial(n - 1));
}
