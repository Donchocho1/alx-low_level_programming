#include "main.h"
/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: list of argument
 *
 * Return: Always(0)
 */
int main(int argc, char **argv)
{
	FILE *file_from, *file_to;
	char buffer[1024];
	ssize_t bytes_read;
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}

	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = fopen(argv[2], "w+");
	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		fwrite(buffer, 1, bytes_read, file_to);
	}

	fd1 = fileno(file_from);
	if (fclose(file_from) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	}

	fd2 = fileno(file_to);
	if (fclose(file_to) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	return (0);
}
