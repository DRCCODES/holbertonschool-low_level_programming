#include <stdio.h>
/**
 * main - main block
 * Description: print 50  terms start 1 and 2.
 *
 * Return: 0
 */


int main(void)
{
	unsigned long int i;
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int c = 0;
printf("%lu, ", j);
printf("%lu, ", k);
for (i = 0; i < 48; i++)
{
c = (j + k);
j = k;
k = c;
if (i < 47)
{
printf("%lu, ", c);
}
else
printf("%lu", c);
}

return (0);
}
