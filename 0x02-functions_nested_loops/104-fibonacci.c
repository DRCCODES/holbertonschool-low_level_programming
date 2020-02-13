#include <stdio.h>
/**
 *main- prints first 98 fib terms
 *
 *Return: 0
 */
int main(void)
{
int i = 0;
unsigned long int tr1 = 1, tr2 = 2, nT, b1, b2, b3, b4, b5, b6;
nT = tr2 + tr1;
printf("%lu, ", tr1);
printf("%lu, ", tr2);
while (i < 90)
{
printf("%lu, ", nT);
tr1 = tr2;
tr2 = nT;
nT = tr1 + tr2;
i++;
}
b5 = tr1 / 1000000000;
b4 = tr1 % 1000000000;
b3 = tr2 / 1000000000;
b2 = tr2 % 1000000000;
while (i >= 90 && i < 95)
{
if (i < 94)
{
b1 = b5 + b3;
b6 = b4 + b2;
printf("%lu%lu, ", b1, b6);
b5 = b3;
b4 = b2;
b3 = b1;
b2 = b6;
i++;
}
else
{
b1 = b5 + b3;
b6 = b4 + b2;
printf("%lu%lu", b1, b6);
i++;
}
}
printf("\n");
return (0);
}
