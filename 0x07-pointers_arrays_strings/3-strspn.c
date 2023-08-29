#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to char that needs to be scanned
 * @accept: pointer to char that needs to match the scanned s
 *
 * Return: length of char in accept that matches s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len, j, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
return (len);
}
