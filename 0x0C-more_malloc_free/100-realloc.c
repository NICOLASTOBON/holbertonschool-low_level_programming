#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: is a parameter
 * @old_size: is a parameter
 * @new_size: is a parameter
 * Return: reallocates a memory block using malloc and free
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *i;

	if (new_size == old_size)
		return (NULL);
	if (ptr == NULL)
	{
		i = malloc(new_size);
		if (i == NULL)
			return (NULL);
		return (i);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = malloc(new_size);
	if (i == NULL)
		return (NULL);
	_memcpy(i, ptr, old_size);
	free(i);
	return (i);
}
