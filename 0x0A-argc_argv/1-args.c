#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed in it
 * @argc: number of arguments
 * @argv: arguments that teh arr will hold
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			argv++;
		}
	printf("%d\n", argc - 1);
	}
	else
		printf("0\n");
	return (0);

}
