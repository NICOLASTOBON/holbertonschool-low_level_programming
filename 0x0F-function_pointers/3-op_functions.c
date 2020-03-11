#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - sum two integers
 * @a: is a parameter
 * @b: is a parameter
 * Return: Result sum two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two integers
 * @a: is a parameter
 * @b: is a parameter
 * Return: Result sub two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two integers
 * @a: is a parameter
 * @b: is a parameter
 * Return: Result mul two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two integers
 * @a: is a parameter
 * @b: is a parameter
 * Return: Result div two integers
 */
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
 * op_mod - mod two integers
 * @a: is a parameter
 * @b: is a parameter
 * Return: Result mod two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
