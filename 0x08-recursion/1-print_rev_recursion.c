#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string
 * recursively in reverse
 * @s: pointer that holds string
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
