#include "holberton.h"
/**
 * rec - returns the natural square root of a number
 * @n: is a parameter;
 * @i: is a parameter;
 * Return:  returns the natural square root of a number.
 */
int rec(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) >= n)
		return (-1);
	else
		return (rec(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is a parameter;
 * Return:  returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (rec(n, 0));
}
