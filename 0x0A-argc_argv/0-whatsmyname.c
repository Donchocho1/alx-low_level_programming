#include <stdio.h>

/**
 * main - a function that prints is name in the command line
 * @argc: the number of arg that will be wntered in the command line
 * @argv: pointer to char arr that will hold the argument
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", *argv);
	}
	return (0);
}
