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
	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
