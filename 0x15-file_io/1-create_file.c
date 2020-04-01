#include "holberton.h"
/* PROTOTYPES */
int _strlen(char *s);

/**
 * create_file - function that creates a file.
 * @filename: is a parameter
 * @text_content: is a parameter
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wd = write(STDOUT_FILENO, text_content, _strlen(text_content));
		if (wd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - return the length of string
 * @s: is a pointer to string;
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
