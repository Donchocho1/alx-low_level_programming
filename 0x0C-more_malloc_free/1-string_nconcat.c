#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: the number of n bytes that will be copied in string 2
 *
 * Return: pointer to the concanted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = (char *)malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';

return (ptr);
}
