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
	int i, num = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			num *= atoi(argv[i]);
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
