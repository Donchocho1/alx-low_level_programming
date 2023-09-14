#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a funct that executes a funct given as
 * a parametr on each element of an array
 * @array: pointer to an array
 * @size: size of an arr of int
 * @action:function pointer to a pointer that prints an element
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int num))
{

	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
