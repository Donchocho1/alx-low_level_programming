#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase, 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
_putchar('\n');
i++;
}
}
