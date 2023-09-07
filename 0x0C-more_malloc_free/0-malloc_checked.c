#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - a function that alloactes memory using malloc
 * @b: int parameter
 *
 * Return: pointer to memory location
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
