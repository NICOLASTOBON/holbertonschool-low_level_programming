#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);

	putchar('\n');
	return (0);
}
