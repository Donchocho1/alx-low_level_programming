#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer string that is being searched
 * @needle: sub string thst will be searched for
 *
 * Return: pointerto beginning of the located substring
 * oR NULL if no substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;


		while (*n && *h == *n)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	 haystack++;
	}
return (NULL);
}
