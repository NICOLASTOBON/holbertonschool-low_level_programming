#include "holberton.h"
/**
 * print_line - that draws a straight line in the terminal.
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
