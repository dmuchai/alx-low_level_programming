#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 if on success. -1 on failure...
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int stringlen;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (stringlen = 0; text_content[stringlen]; stringlen++)
		;

	wr = write(fd, text_content, stringlen);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
