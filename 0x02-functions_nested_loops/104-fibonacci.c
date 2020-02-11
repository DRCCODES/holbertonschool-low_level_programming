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

for (i = 0; i < 98; i++)
{
c = (j + k);
k = j;
j = c;
printf("%f, ", c);
}
return (0);
}
