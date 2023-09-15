#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: a pointer to an array of int
 * @size: size of the array
 * @cmp: function pointer to the comparison functions
 *
 * Return: the integer pointing to the index position of
 * the first element the cmp function matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
