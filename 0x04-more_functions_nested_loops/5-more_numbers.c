#include "main.h"

/**
 * more_numbers - a function that prints numbers from 0 - 9
 *
 * Return: Void
 */
void more_numbers(void)
{

int i, j;

i = 0;
while (i < 10)
{
	j = 0;
	while (j < 15)
	{
		if (j > 9)
		{
		_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
		j++;
	}
_putchar('\n');
i++;
}

}
