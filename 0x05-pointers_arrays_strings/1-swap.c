#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: First int
 * @b: Second int
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
