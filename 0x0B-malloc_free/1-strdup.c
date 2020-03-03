#include "holberton.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a parameter
 * Return: null if str = NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *dest;
	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	dest = malloc(sizeof(char) * (i + 1));

	if (dest != NULL)
	{
		for (j = 0; j < i; j++)
			dest[j] = str[j];
	}
	else
		return (NULL);
	dest[j] = '\0';

	return (dest);
}
