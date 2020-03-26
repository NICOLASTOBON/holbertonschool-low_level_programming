#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int;
 * @b: is a pointer
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, bas = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (; i >= 0; i--)
	{
		if (b[i - 1] == '1')
			res += bas;
		bas *= 2;
	}
	return (res);
}
