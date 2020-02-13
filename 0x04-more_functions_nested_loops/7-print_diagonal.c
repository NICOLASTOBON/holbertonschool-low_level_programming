#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int a;

	for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; ++a)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
