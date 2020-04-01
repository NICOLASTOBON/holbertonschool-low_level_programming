#include "holberton.h"
#define BUFFSIZE 1204

/**
 * main - cps contents of one file to another
 * @ac: arguement count
 * @av: arguement list: file names
 * Return: 0;
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	int _in, _out;
	char buff[BUFFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	_in = _out = 1;
	while (_in)
	{
		_in = read(file_from, buff, BUFFSIZE);
		if (_in == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (_in > 0)
		{
			_out = write(file_to, buff, _in);
			if (_out == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	_out = close(file_from);
	if (_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	_out = close(file_to);
	if (_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
