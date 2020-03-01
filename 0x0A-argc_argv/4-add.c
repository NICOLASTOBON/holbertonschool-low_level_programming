#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _ispositive - Entry points
 * @c: is a parameter
 * Return: Always (0) Success
 */
int _ispositive(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (isdigit(c[i]) == 0)
		{
			printf("value[%d] = %d\n", i, c[i]);
			return (1);
		}
	}
	return (0);
}
/**
 * main - Entry points
 * @argc: is a parameter
 * @argv: is a parameter
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int i, num = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (_ispositive(argv[i]) == 0)
				num += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", num);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
