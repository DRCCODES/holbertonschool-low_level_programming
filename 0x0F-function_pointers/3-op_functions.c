#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: num 1
 * @b: num2
 * Return: result
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtractes two integers
 * @a: num1
 * @b: num2
 * Return: result
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: num1
 * @b: num2
 * Return: result
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divid to integers
 * @a: num1
 * @b: num2
 * Return: result
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - module of integer
 * @a: num1
 * @b: num2
 * Return: result
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
