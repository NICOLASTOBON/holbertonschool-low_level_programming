#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry points
 * @argc: is a pararameter
 * @argv: is a parameter
 * Return: success (0);
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
