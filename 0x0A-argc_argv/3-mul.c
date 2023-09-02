#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiples two numbers
 * @argc: number of arguments
 * @argv: arguments that the arr will hold
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i,  sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum  = sum * atoi(argv[i]);
	}
printf("%d\n", sum);
return (0);
}
