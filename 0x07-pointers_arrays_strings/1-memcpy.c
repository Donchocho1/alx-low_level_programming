#include "main.h"

/**
 * _memcpy - a function that copies n  bytes from
 * memory area src to memory area dest
 * @dest: pointer where src  memory will be copied tp
 * @src: pointer to memory area to be copied
 * @n: number of bytes of memory area to be copied
 *
 * Return: pointer which memory has been copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
return (dest);

}
