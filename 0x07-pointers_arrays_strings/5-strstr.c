#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: is a parameter
 * @needle: is a parameter
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;


	for (i = 0; haystack[i]; i++)
	{
		for (k = i, j = 0; needle[j]; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0')
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
