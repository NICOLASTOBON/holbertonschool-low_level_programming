#include "holberton.h"
#include <stdlib.h>
/**
 * print_number - Prints a number
 * @n: The number to print
 * Return: none
 */
void print_number(int n)
{
	if (n / 10 == 0)
	{
		if (n < 0)
			_putchar('-');
		_putchar((abs(n) + '0'));
		return;
	}
	print_number(n / 10);

	_putchar((abs(n % 10) + '0'));
}
