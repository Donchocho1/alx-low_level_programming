#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which conntains a copy of the string given in
 * a parameter
 * @str: pointer to string that will be copied
 *
 * Return: pointer to newly allocated memory on Succeess
 * else returns NULL
 */
char *_strdup(char *str)
{
	int str_len;
	char *ptr, *dest;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptr = (char *)malloc(str_len + 1 * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	dest = ptr;
	while (*str)
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
	if (str == NULL)
	{
		return (NULL);
	}
return (ptr);
}
