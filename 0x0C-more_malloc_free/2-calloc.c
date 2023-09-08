#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: represents the num of blocks it will allocate
 * @size: represents the size of one single block
 *
 * Return: to the pointer of the starting block of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(nmemb * sizeof(size));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
return (ptr);
}
