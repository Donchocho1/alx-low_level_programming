#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: first pointer to concatenate
 * @src: second pointer to concatenate
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{

int i, j;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
dest[i] = '\0';
return (dest);
}
