#include "holberton.h"
#include "holberton.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is a parameter
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_function - function print
 * @format: is a parameter
 * @formato: is a parameter
 * Return: length of string
 */
int print_func(const char *format, va_list formato)
{
	argum fm[] = {
		{"c", print_c},
		{"s", print_s},
		//{'%', print_c},//
	};
	int i;

	for(i = 0; i < 2; i++)
	{
		if (format[i] == *fm[i].op)
		{
			fm[i].f(formato);
		}
	}
	return (0);
}
/**
 * print_c - function print caracter
 * @c: is a parameter
 * Return: length of string
 */
int print_c(va_list formato)
{
	int i = 0;

	i = _putchar(va_arg(formato, int));
	return (i);
}
/**
 * print_s - function print string
 * @s: is a parameter
 * Return: length of string
 */
int print_s(va_list formato)
{
	char *ptr = va_arg(formato, char *);

	int len = _strlen(ptr);

	if (ptr == NULL)
		return (1);
	write(1, ptr, len);

	return (len);
}
/**
 * print_p - function porcent
 * @p: is a parameter
 * Return: length of string
 */