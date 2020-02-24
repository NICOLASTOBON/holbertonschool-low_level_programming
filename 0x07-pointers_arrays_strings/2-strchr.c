#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: is a parameter
 * @c: is a parameter
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (0);
}

