#include "holberton.h"

/**
 * _print_rev_recursion - print out str in reverse using recursion
 * @s: str to be printed in reverse
 *
 * Return: N/A
 *
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
