#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: string that the function accepts and prints
 * @f: function pointer that the function accepts as a par
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
