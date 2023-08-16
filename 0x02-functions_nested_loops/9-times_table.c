#include "main.h"
/**
 * times_table - prints the 9times tables, starting from 0
 *
 * Reurn: Void
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (mul < 10)
				{
				_putchar(' ');
				}

			}
			if (mul < 10)

			{
			_putchar(mul + '0');
			}
			else
			{
			_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
