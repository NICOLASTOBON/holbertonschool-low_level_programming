#include "holberton.h"
/**
 * _strcat - This function appends the src string to the dest string.
 * @dest: is a parameter
 * @src: is a parameter
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
