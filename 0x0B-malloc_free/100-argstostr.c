#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac : size of the args to be passed
 * @av: args to be passed
 *
 * Return: pointer to the strins passed to av
 */
char *argstostr(int ac, char **av)
{
	int i, j, index, size = ac;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}

	}
	ptr = (char *)malloc(size + 1 * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[index++] = av[i][j];
		}
		ptr[index++] = '\n';
	}
	ptr[size] = '\0';
return (ptr);
}
