#include <stdio.h>
/**
 * main - Entry points
 * Return: Always 0 (Success)
 */
void print_fibonacci2(void);

int main(void)
{
	print_fibonacci2();
	return (0);
}
/**
 * print_fibonacci2 - print  Fibonacci numbers.
 * main - Entry points
 * Return: Always 0 (Success)
 */
void print_fibonacci2(void)
{
	long i, num1 = 1, num2 = 0, tmp = 0, sum = 0;

	for (i = 0; i < 33; i++)
	{
		tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;

		if ((tmp < 4000000) && (tmp % 2 == 0))
			sum += tmp;
	}
	printf("%ld\n", sum);
}
