#include "holberton.h"
#define _BUSIZE 1024

/**
 * main - Entry point
 * @argc: is a parameter
 * @argv: is a parameter
 * Return: success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wd, rclose_from, rclose_to;
	char buf[_BUSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);

	while ((rd = read(file_from, buf, _BUSIZE)) > 0)
	{
		wd = write(file_to, buf, rd);
		if ((wd != rd) || (wd < 0))
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	rclose_from = close(file_from);
	if (rclose_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from), exit(100);

	rclose_to = close(file_to);
	if (rclose_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to), exit(100);
	return (0);
}
