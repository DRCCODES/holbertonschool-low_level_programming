#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
* main - Entry point.
* Return: Always 0.
*/

int main(void)
{
char pass[1000000];

int a;
int c = 0;
int sum;
int i = 0;

srand((unsigned) time(NULL) * getpid());
while (sum < 2682)
{

c = rand() % 43 + 48;
sum += c;
pass[i] = c;
i++;
}
a = 2772 - sum;
sum = sum + a;
pass[i] = a;
printf("%s", pass);
return (0);
}
