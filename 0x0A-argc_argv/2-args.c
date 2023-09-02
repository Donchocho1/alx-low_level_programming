#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it recieves
 * @argc: number of arguments
 * @argv: arguments that the arr will hold
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
