#include "main.h"
/**
 * append_text_to_file - appends a text to an existing file
 * @filename: the name of the given file
 * @text_content: the text to be appended to the file
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
