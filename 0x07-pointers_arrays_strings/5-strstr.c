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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
	 haystack++;
	}
return (NULL);
}
