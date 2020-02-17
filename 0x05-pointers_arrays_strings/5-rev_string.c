#include "holberton.h"
/**
 * rev_string - function that reverses a string.
 * @s: is a parameter
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
	{
		temp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = temp;
		i--;
	}
}
