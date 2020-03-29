#include <stdio.h>
/**
 * main - Entry points
 * Return: Always 0 (Success)
 */
void fibonacci(void);

int main(void)
{
	fibonacci();
	return (0);
}
/**
 * fibonacci - print the first 50 Fibonacci numbers.
 * main - Entry points
 * Return: Always 0 (Success)
 */
void fibonacci(void)
{
	long i, num1 = 1, num2 = 2, tmp = 0;

	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;
		printf(", %ld", tmp);
	}
	putchar('\n');
}
