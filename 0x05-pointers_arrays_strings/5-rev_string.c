#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string
 *
 * Return: Void
 */
void rev_string(char *s)
{

int i, k, len;
char temp;
len = 0;

	while (s[len] != '\0')
	{


		len++;
	}

	for (i = 0, k = len - 1; i < k; i++, k--)

	{
		temp = s[i];

		s[i] = s[k];

		s[k] = temp;

	}

}
