#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: is a parameter
 * @b: is a parameter
 * @n: is a parameter
 * Return: Returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
