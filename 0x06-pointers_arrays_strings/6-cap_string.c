#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: is a parameter
 * Return: Always capitalizes
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;
		else if ((s[i] == ' ') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
		else if ((s[i] == '\t') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
		else if ((s[i] == '\n') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
		else if ((s[i] == '.') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
