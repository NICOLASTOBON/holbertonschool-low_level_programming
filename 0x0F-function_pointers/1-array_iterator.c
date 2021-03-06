#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: is a paramater
 * @size: is is the size of the array
 * @action: is the function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
