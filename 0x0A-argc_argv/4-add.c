#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that positive number
 * @argc: number of arguments
 * @argv: arguments that the arr will hold
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			char *str;

			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{

				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}

			}


		}


	}
	for (i = 1; i < argc; i++)
	{
		sum  = sum + atoi(argv[i]);
	}
printf("%d\n", sum);
return (0);
}
