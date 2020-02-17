#include "holberton.h"
/**
 * puts_half - function that prints half of a string
 * @str: is a parameter
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i + 1) / 2; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
