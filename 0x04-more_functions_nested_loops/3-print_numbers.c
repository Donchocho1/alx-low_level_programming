#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 - 9
 *
 * Return: Void
 */
void print_numbers(void)
{

int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
_putchar('\n');

}
