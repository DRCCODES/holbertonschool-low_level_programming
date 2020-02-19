#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	int roof = 126;

	while (sum < 2646)
	{
	srand(time(NULL));
	c = (rand() % 96 + 32);
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
