#include "holberton.h"
#include <stdio.h>
/**
 * main - hat prints the numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5 == 0) && (!(i % 3 == 0)))
		{
			printf("Buzz");

			if (i != 100)
				putchar(' ');
		}
		else if ((i % 3 == 0) && (!(i % 5 == 0)))
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return (0);
}
