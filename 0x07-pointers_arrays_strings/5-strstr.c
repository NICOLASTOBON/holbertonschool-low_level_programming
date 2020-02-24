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

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (needle + i);
			}
		}
		if (!haystack[i])
			break;
	}
	return (0);
}
