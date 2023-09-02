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
	int i, a, b,  sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			sum  = a * b;
		}
	printf("%d\n", sum);
	}
	if (argc < 2)
	{
		printf("Error\n");
	}
return (0);
}
