#include "holberton.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: is the first parameter
 * @b: is the second parameter
 * Return: Aways 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
