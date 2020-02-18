#include "holberton.h"
/**
 * print_rev - function that prints a string.
 * @s: is a parameter
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
