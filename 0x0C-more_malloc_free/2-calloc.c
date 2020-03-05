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

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @size: is a parameter
 * @nmemb: is a parameter
 * Return: allocates memory for an array, using malloc.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr;

	ptr = malloc(nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size);

	return (ptr);
}
