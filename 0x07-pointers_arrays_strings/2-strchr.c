#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a char in a string
 * @s: pointer that is being searched
 * @c: char to search for
 *
 * Return: pointer of string if char is found
 * oR NULL if char is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
		{
			return (NULL);
		}
	 s++;
	}
return (NULL);
}
