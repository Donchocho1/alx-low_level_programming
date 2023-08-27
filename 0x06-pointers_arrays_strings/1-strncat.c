#include "main.h"

/**
 * _strncat - a function that concatenates two strings of n bytes
 * @dest: first pointer to concatenate
 * @src: second pointer to concatenate
 * @n: number of n bytes
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{

int i, j;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
dest[i] = '\0';
return (dest);
}
