#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: is a parameter
 * @size: is the size of array
 * @cmp: is a funtion pointer
 * Return: Success 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
