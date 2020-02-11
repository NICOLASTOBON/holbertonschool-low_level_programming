#include "holberton.h"
/**
 * jack_bauer - function that prints every minute of the day
 *
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int z;
	int y;

	for (z = 0; z <= 23; z++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
