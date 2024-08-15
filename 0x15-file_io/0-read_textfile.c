#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read
 * @letters: The number of letters to be read and printed
 *
 * Return: The actual number of letters read and printed, or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t num_read;
	ssize_t num_written;
	int fd;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	close(fd);
	return (0);
	}

	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written == -1 || num_written != num_read)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	free(buffer);
	close(fd);

	return (num_written);
}
