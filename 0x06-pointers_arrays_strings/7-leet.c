#include "holberton.h"
/**
 * leet - function that encodes a string.
 * @s: is a parameter
 * Return: encodes
 */
char *leet(char *s)
{
	char low[6] = "aeotl";
	char upp[6] = "AEOTL";
	char num[6] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
			if (s[i] == low[j] || s[i] == upp[j])
				s[i] = num[j];
	}
	return (s);
}
