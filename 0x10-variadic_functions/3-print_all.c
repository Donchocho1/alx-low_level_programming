#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char
 * @arg: A list of arguments pointing to
 * the character to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int
 * @arg: A list of args poiting to the
 * int to be printed
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float
 * @arg: A list of args pointing to the
 * flaot to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 * the string to be printed.
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the funct
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *seperator = "";
	printer_t funcs[] = {

		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}

	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", seperator);
			funcs[j].print(args);
			seperator = ", ";
		}
	i++;
	}
	printf("\n");

	va_end(args);
}

