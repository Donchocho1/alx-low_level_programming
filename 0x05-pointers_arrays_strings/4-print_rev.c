#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string in reverse
 * @str: the string to be reversed
 *
 * Return: void
 */
void print_rev(char *str)
{

int i, j, len;
len = 0;


	for (i = 0; str[i] != '\0'; i++)
	{

		len++;

	}
	for (j = len - 1; j >= 0; j--)
	{

		printf("%c", str[j]);
	}


putchar('\n');

}
