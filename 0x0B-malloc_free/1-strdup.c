#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a parameter
 * Return: null if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	char *dest;

	dest = malloc(sizeof(char) * strlen(str) + 1);

	if (dest == NULL)
		return (NULL);
	strcpy(dest, str);

	for (i = 0; dest[i] != '\0'; i++)
		;

	dest[i] = '\0';

	return (dest);
}
