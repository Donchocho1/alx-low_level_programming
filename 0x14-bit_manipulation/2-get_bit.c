#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at
 * a given index
 * @n: value that the bit will be returned
 * @index: index position of bit to be returned
 *
 * Return: Value of the bit at index else 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;
	int result;

	result = (n & mask) != 0 ? 1 : 0;

	return (result);
}
