#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - a variadic function that prints numbers
 * @seperator: is the str to be printed between num
 * @n: number of int passed to the funct
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list args;

	if (seperator == NULL)
		return;

	va_start(args, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (counter != n - 1)
		{
			printf("%s", seperator);
		}
		else
			printf("\n");
	}
	va_end(args);
}
