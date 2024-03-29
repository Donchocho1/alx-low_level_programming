#include "main.h"

/**
 * _puts_recursion - a function that prints a s tring recursively
 * @s: pointer that holds string
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
