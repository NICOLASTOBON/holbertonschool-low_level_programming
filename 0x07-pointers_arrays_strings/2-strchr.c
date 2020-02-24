#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: is a parameter
 * @c: is a parameter
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++);

	for (j <= 1; s[j] != '\0'; j++)
	{
		if (s[j] == c)
			return (s + i);
	}
	return ('\0');
}

