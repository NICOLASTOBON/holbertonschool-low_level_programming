#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, num, aux;

	num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		aux = i;
		if ((num % aux) == 0)
			num /= aux;
	}
	printf("%ld\n", aux);
	return (0);
}
