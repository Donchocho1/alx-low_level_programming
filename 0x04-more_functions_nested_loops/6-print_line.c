#include "main.h"

/**
 * print_line - a function that prints _ n times
 * @n: number of times _ should be printed
 *
 * Return: Void
 */
void print_line(int n)
{

int i;
i = 0;
	while (i < n)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{
		_putchar('_');
		}
	i++;
	}
	_putchar('\n');
}
