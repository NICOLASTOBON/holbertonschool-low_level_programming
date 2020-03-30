#include <stdio.h>
/**
 * main - Entry points
 * Return: Always 0 (Success)
 */
void print_fibonacci3(void);

int main(void)
{
	print_fibonacci3();
	return (0);
}
/**
 * print_fibonacci3 - print  Fibonacci numbers.
 * main - Entry points
 * Return: Always 0 (Success)
 */
void print_fibonacci3(void)
{
	long double i, num1 = 1, num2 = 2, temp = 0;

	printf("1, 2");
	for (i = 0; i < 96; i++)
	{
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;

		printf(", %0.Lf", temp);
	}
	putchar('\n');
}
