#include <stdio.h>
/**
 * main - Entry points
 *
 * Return: Alaways 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d \n", sum);
	return (0);
}
