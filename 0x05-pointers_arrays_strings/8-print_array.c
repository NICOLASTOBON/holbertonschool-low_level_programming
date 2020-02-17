#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers.
 * @a: is a parameter
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != '\0')
			printf(", ");
		printf("%d", a[i]);
	}
	putchar('\n');
}
