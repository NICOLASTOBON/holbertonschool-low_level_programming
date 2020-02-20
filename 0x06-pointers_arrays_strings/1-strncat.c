#include "holberton.h"
/**
 * _strncat - function that copies a string.
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j + i] = src[j];
	return (dest);
}
