#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the file that will be read
 * @letters: the number of nbytes to be read from the file
 *
 * Return: The actual number of letters it could read & print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	char *buffer;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	/* if file fails to open */
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);

	/* if file fails to read */
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written < bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_read);
}
