#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * a@: prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
