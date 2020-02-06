#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int al;
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' ; ch++)
		putchar(ch);
	for (al = 'A'; al <= 'Z' ; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
