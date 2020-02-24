#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: is a parameter
 * @needle: is a parameter
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
		if (!needle[i])
			break;
	}
	return (0);
}
