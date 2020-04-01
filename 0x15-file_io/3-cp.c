#include "holberton.h"
/**
 * main - cps contents of one file to another
 * @argc: arguement count
 * @argv: arguement list: file names
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int from_d, to_d, wf, rf, cf, ct;
	char buff[BUSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from_d = open(argv[1], O_RDONLY);
	if (from_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rf = read(from_d, buff, BUFSIZ)) > 0)
	{
		wf = write(to_d, buff, rf);
		if (wf == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	}
	if (rf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cf = close(from_d);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from_d), exit(100);
	ct = close(to_d);
	if (ct == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to_d), exit(100);
	return (0);
}
