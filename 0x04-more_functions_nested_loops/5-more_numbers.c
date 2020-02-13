#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
