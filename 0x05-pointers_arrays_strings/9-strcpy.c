#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte
 * @src: string to be copied
 * @dest: where src will be copied too
 *
 * Return: pointer to char(dest)
 */
char *_strcpy(char *dest, char *src)
{
char *dest_add = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
*dest = '\0';
return (dest_add);

}
