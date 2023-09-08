#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: min value in the array of int
 * @max: max value of an array of int
 *
 * Return: Pointer of memory
 */
int *array_range(int min, int max)
{
	int i, size = max - min + 1;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	ptr[i] = min + i;
	}
return (ptr);
}
