#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string input
 *
 * Return: Void
 */
void puts_half(char *str)
{
int n, len;
char *last;
len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

n = (len - 1) / 2;

	if (len % 2 != 0)
	{
		last = str + len - n;
		printf("%s\n", last);
	}
	else
	{
	last = str + n + 1;
	printf("%s\n", last);
	}
}
