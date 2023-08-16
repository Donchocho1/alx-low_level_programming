#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @a: the input value which last digit will be printed
 *
 * Return: The last digit of the number
 */
int print_last_digit(int a)
{

	int lst_digit;
	
	if ( a < 0)
	{
		a = -a;
	}
	
	lst_digit = a % 10;
		
	_putchar(lst_digit + '0');
		
	
	return lst_digit;
}
