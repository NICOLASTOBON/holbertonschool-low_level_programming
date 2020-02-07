#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;
	int y;
	int x;

	for (z = '0'; z <= '9'; z++)
	{
		for (y = z + 1; y <= '9'; y++)
		{
			for (x = y + 1; x <= '9'; x++)
			{
				putchar(z);
				putchar(y);
				putchar(x);
				if (z != '7' || y != '8' || x != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
