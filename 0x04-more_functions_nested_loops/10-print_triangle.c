#include "holberton.h"
/**
 * print_triangle - function that prints a triangle
 * @size: is a parameter
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, a;

	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
		{
			if (a + 1 < (size - i))
				_putchar('.');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
