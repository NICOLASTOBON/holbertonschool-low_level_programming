#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: is a parameter
 * Return:  returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
