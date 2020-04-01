#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is the source file
 * @letters: is the number of character
 * Return:  number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1 )
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	wd = write(STDOUT_FILENO, buff, rd);
	if (fd == -1 || rd == -1 || wd == -1 || wd != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (wd);
}
