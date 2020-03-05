#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _memset- Function that sets a buffer
* @s: array
* @b: array to set
* @n: number of iterations
* Return: array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	i++;
	}
return (s);
}
/**
 * _calloc - function that sets a buffer
 * @nmemb: array
 * @size: size of the elements
 * Return: array with the memory set
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (NULL);
	}
	_memset(p, 0, size * nmemb);
	return (p);
}
