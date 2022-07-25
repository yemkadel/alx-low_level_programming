#include "main.h"
/**
 * create_file - creates a file and writes to it
 * @filename: the name of the file to be created
 * @text_content: the content of the file to be created
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwr, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY |  O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	nwr = write(fd, text_content, i);
	if (nwr == -1)
		return (-1);

	close(fd);
	return (1);
}
