#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: is a parameter
 * @max: is a parameter
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
