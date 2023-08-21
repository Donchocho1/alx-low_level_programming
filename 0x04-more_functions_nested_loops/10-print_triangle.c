#include "main.h"

/**
 * print_triangle - a function that prints a square
 * @size: size to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{

int i, j, k;

	for (i = 1; i <= size; i++)
	{

		for (j = 1; j <= size -  i; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{

			_putchar('#');
		}
	_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}


}
