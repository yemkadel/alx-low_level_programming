#include "main.h"
/**
 * read_textfile - reads a file with the filename
 * @filename: the given filename
 * @letters: the number of letters to read
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nwrite, nread;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	nread = read(fd, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);
	free(buf);

	return (nread);
}
