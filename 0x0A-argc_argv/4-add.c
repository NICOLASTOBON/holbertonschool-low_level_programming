#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry points
 * @argc: is a parameter
 * @argv: is a parameter
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int i, a, num = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[i]);

			if (a == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				num += a;
		}
		printf("%d\n", num);
	}
	else
		printf("0\n");
	return (0);
}
