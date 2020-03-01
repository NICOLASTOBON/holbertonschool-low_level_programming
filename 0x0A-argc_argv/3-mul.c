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

	if (argc - 1 == 0)
	{
		printf("%s\n", "Error");
	}
	else if (argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
