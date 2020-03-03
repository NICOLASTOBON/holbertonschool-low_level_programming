#include "holberton.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a parameter
 * Return: null if str = NULL
 */
char *_strdup(char *str)
{
	char *dest;

	dest = malloc(sizeof(char) * strlen(str) + 1);

	if (dest == NULL)
		return (NULL);
	strcpy(dest, str);

	return (dest);
}
