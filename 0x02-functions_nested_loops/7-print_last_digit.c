#include "holberton.h"
/**
 * print_last_digit - Entry poinst
 *
 *@n: last number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}
