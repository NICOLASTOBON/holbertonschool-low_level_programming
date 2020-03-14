#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is a parameter
 * @n: is a parameter
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ptr;

	va_start(list, n);
	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char *);

		printf("%s", ptr);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		if (n != i + 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	putchar('\n');
}
