#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - a variadic function that prints strings
 * @seperator: is the str to be printed between the strings
 * @n: number of strings passed to the funct
 *
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list args;
	char *convert_ascii;

	if (seperator == NULL)
		return;

	va_start(args, n);
	for (counter = 0; counter < n; counter++)
	{
		convert_ascii = va_arg(args, char *);
		if (convert_ascii != NULL)
		{
			printf("%s", convert_ascii);
			if (counter != n - 1)
			{
				printf("%s", seperator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
