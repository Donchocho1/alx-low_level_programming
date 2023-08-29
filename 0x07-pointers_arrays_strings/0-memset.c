#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer which memory will be filled
 * @b: constant byte that will fill the memory of s pointer
 * @n: number of bytes to fill the memory pointed
 *
 * Return: pointer which memory has been filled
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);

}
