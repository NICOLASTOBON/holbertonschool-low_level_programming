#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: is a pointer
 * @index: is a parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int res;

	if (index > 64)
		return (-1);

	res = ~(1 << index);
	*n &= res;

	return (1);
}
