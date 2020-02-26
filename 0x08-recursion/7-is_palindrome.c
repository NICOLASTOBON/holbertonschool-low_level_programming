#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: is a parameter
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);
	else
		return (i + _strlen_recursion(s + i));
}
/**
 * isCheck - function that returns 1 if a string is a palindrome and 0 if not.
 * @s: is a parameter
 * @i: is a parameter
 * @a: is a parameter
 * Return: returns 1 if a string is a palindrome
 */
int isCheck(char *s, int i, int a)
{
	if (i >= a)
		return (1);
	else if (s[i] == s[a])
		return (isCheck(s, i + 1, a - 1));
	else
		return (0);
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: is a parameter
 * Return: returns 1 if a string is a palindrome
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (isCheck(s, 0, l - 1));
}
