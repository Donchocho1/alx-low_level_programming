#include "main.h"
#include <stddef.h>

/**
 * _strncpy - a function that copies the string pointed to by src n bytes,
 * including the terminating null byte
 * @src: string to be copied
 * @dest: where src will be copied too
 * @n:  bytes to be copied
 *
 * Return: pointer to char(dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_add = dest;
int i;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
while (i < n)
{
*dest = '\0';
i++;
}
return (dest_add);

}
