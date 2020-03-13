#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is a parameter
 * @n: is a parameter
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n && separator != NULL; i++)
	{
		printf("%d", va_arg(list, int));
		if (n != i + 1)
			printf("%s", separator);
	}

	va_end(list);
	putchar('\n');
}
