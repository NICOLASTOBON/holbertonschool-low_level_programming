#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - numbers
 * @n: variable
 * Return:  (0) Successs
 */
void print_to_98(int n)
{

	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d", n);
			n++;
			putchar(',');
			putchar(' ');
		}
		else if (n > 98)
		{
			printf("%d", n);
			n--;
			putchar(',');
			putchar(' ');
		}
	}
	printf("%d", n);
	putchar('\n');
}
