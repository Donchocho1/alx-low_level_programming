#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: int with the value after comparison
 */
int _strcmp(char *s1, char *s2)
{
int result;
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			result = *s1 - *s2;
			return (result);
		}
		else if (*s1 < *s2)
		{
			result = *s1 - *s2;
			return (result);
		}

		else
			return (0);
	s1++;
	s2++;
	}
return (0);
}
