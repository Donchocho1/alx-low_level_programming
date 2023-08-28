#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string to be encoded
 *
 * Return: Pointer to char
 */
char *leet(char *s)
{
	int i, j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lowercase[j] || s[i] == uppercase[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
