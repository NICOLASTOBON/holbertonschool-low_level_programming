#include "holberton.h"
/**
 * _isalpha - Entry point
 *
 * @c: c is the variable for the program.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
