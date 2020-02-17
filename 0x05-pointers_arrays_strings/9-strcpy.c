#include "holberton.h"
/**
 * *_strcpy - Write a function that copies the string pointed to by src.
 * @dest: is a parameter
 * @src: is a parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}

