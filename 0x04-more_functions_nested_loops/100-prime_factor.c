#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143, i;

	for (i = 2; i <= num; i++)
	{
		if ((num % i) == 0)
		{
			if (num != i)
				num /= i;
			else
				printf("%ld\n", i);
		}
	}
}
