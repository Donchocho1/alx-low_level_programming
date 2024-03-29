#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of file to be created
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}

		bytes_written = write(fd, text_content, len);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
