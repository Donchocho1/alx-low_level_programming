#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string that length will be counted
 *
 * Return: length of the string
 */
int _strlen(char *s)
{

	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		len++;


	}
return (len);


}
