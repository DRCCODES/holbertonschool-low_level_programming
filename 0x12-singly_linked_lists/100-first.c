#include <stdio.h>

void __attribute__((constructor)) rabbit(void);

/**
 * rabbit - prts before main
 *
 * Return: N/A.
 */

void rabbit(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
