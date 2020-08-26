#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: is a pointer to the first element to the array
 * @size: number of elements in array
 * @value: is the valor to search
 * Return: the index
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
