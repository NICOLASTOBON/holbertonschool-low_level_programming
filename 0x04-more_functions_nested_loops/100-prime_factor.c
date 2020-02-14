#include <stdio.h>
/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 2;
	long int b = 612852475143;

	while (b != a)
	{
		if (b % a == 0)
			b = b / a;
		else
			a++;
	}
	printf("%d \n", a);
	return (0);
}
