#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of file to be created
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t len, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}

	buffer = (char *)malloc(len + 1 * sizeof(char));
	if (buffer == NULL)
		return (-1);

	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
