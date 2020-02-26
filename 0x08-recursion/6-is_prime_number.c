#include "holberton.h"
/**
 * pretty - returns 1 if the input integer is a prime number,
 * @n: is a parameter
 * @i: is a parameter
 * Return:  if the input integer is a prime number,
 */
int pretty(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	else if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	return (pretty(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * @n: is a parameter
 * Return:  if the input integer is a prime number,
 */
int is_prime_number(int n)
{
	return (pretty(n, 2));
}
