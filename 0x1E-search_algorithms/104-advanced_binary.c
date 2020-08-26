#include "search_algos.h"
/**
 * print_array - print element to the array
 * @array: is a pointer to the first element to the array
 * @start: number of element in array
 * @end: number of element in array
 */
void print_array(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%i\n", array[i]);
}
/**
 * bn_search - searching
 * @array: is a pointer to the first element to the array
 * @left: number of element in array
 * @right: number of element in array
 * @value: is the valor to search
 * Return: the index
 */
int bn_search(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		int mid = (left + right) / 2;

	    print_array(array, left, right);
		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] >= value)
			return (bn_search(array, left, mid, value));
		else
			return (bn_search(array, mid + 1, right, value));
	}
	return (-1);
}
/**
 * advanced_binary - searching
 * @array: is a pointer to the first element to the array
 * @size: number of elements in array
 * @value: is the valor to search
 * Return: the index
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (bn_search(array, 0, size - 1, value));
}
