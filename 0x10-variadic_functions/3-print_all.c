#include "variadic_functions.h"
/**
 * op_char -  function that prints anything.
 * @c: is a parameter
 * Return: nothing
 */
void op_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * op_int -  function that prints anything.
 * @i: is a parameter
 * Return: nothing
 */
void op_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * op_float -  function that prints anything.
 * @f: is a parameter
 * Return: nothing
 */
void op_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * op_string -  function that prints anything.
 * @s: is a parameter
 * Return: nothing
 */
void op_string(va_list s)
{
	char *ptr = va_arg(s, char *);

	if (ptr == NULL)
		ptr = "(nil)";
	printf("%s", ptr);
}
/**
 * print_all -  function that prints anything.
 * @format: is a parameter
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j;
	char *s = "";

	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *ops[j].op)
			{
				printf("%s", s);
				ops[j].f(list);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list);
	putchar('\n');
}
