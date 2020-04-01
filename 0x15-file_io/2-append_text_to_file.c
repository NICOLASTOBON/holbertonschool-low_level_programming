#include "holberton.h"
/* PROTOTYPE */
int _strlen(char *s);

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is a parameter
 * @text_content: is a parameter
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wd = write(fd, text_content, _strlen(text_content));
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
