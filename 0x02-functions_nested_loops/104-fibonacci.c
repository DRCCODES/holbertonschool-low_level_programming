#include <stdio.h>
/**
 *main- print up to 98th term sarting 1 ,2
 *
 *Return: 0
 */

int main(void)
{
unsigned long int i;
unsigned long int  j = 1;
unsigned long int  k = 2;
unsigned long int  c = 0;
printf("%lu, ", j);
printf("%lu, ", k);
for (i = 0; i < 96; i++)
{
c = (j + k);
j = k;
k = c;
printf("%lu, ", c);
}
printf("\n");
return (0);
}
