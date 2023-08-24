#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{

int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		printf("%c", str[i]);

	}
putchar('\n');

}
