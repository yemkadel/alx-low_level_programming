#include "main.h"
#include <stdio.h>

/**
 * error_check - checks if error ocurred during file operation.
 * @from_file: file to be copied from
 * @to_file: file to be copied to.
 * @args: arguments
 *
 * Return: void
 */
void error_check(int from_file, int to_file, char *args[])
{
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - main file
 * @argc: argument count.
 * @argv: arguments
 *
 * Return: Always int
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, error;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from_file = open(argv[1], O_RDONLY);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_check(from_file, to_file, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from_file, buf, 1024);
		if (nchars == -1)
			error_check(-1, 0, argv);
		nwr = write(to_file, buf, nchars);
		if (nwr == -1)
			error_check(0, -1, argv);
	}

	error = close(from_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}

	error = close(to_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	return (0);
}
