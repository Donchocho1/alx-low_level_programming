#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * a given index
 * @n: value that the bit will be returned
 * @index: index position of bit to be returned
 *
 * Return: Value of the bit at index else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >=  sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
