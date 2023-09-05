#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an arr of chars
 * and initializes it with a specific char
 * @size: size of the array of char
 * @c: specific char that will be initialized in the char arr
 *
 * Return: if Successful will return a pointer to char
 * (dynamically allocated memory space) else returns
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
return (str);
}
