#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day
 *
 * Return: Void
 */
void jack_bauer(void)
{

int min, hour;
for (hour = 0; hour <= 24; hour++)
{
	for (min = 0; min < 60; min++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
	}
}





}
