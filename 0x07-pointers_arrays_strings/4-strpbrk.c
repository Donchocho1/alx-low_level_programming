#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: pointer that is being searched
 * @accept: bytes to match s
 *
 * Return: pointer of string if char is found
 * oR NULL if char is not found
 */
char *_strpbrk(char *s, char *accept)
{
char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{

			if (*s == *temp)
			{
				return (s);
			}
		temp++;
		}
	 s++;
	}
return (NULL);
}
