#include "holberton.h"
/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: is a parameter
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
