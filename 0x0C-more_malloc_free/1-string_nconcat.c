#include "holberton.h"
/**
 * _strlen - Entry points
 * @str: is a parameter
 * Return: success (i)
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat- function that concat a string.
 * @s1: is a parameter
 * @s2: is a parameter
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lon1, lon2, total;
	char *ptr;


	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	lon1 = _strlen(s1);
	lon2 = _strlen(s2);

	if (n >= lon2)
		n = lon2;

	total = (lon1 + n) + 1;

	ptr = malloc(total * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lon1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n ; j++)
		ptr[j + i] = s2[j];

	ptr[j + i] = '\0';
	return (ptr);
}
