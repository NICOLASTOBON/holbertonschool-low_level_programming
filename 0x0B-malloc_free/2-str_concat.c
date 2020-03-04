#include "holberton.h"
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: is a parameter
 * @s2: is a parameter
 * Return: should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	dest = malloc(i + j + 1);

	if (dest == 0)
		return (0);

	for (k = 0; k < i; k++)
		dest[k] = s1[k];
	for (k = 0, l = i; k < j; l++, k++)
		dest[l] = s2[k];
	dest[l] = '\0';
	return (dest);
}
