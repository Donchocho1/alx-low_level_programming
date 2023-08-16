#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @a: the input value which last digit will be printed
 *
 * Return: The last digit of the number
 */
int print_last_digit(int a)
{

	int num;

	num = a % 10;

	if (a >= 0)
	{

		_putchar(num + '0');
		return (num);
	}
	else
	{
		_putchar(-num + '0');
		return (-num);
	}
}
