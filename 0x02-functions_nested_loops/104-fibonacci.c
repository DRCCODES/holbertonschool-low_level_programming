#include <stdio.h>
/**
 *main- print up to 98th term sarting 1 ,2
 *
 *Return: 0
 */

int main(void)
{
double i;
double j = 1;
double k = 2;
double c = 0;
printf("%f, ", j);
printf("%f, ", k);

for (i = 0; i < 96; i++)
{
c = (j + k);
j = k;
k = c;
printf("%f, ", c);
}
printf("\n");
return (0);
}
