#include <stdio.h>

/**
 * puts2 - a function that prints every other
 * character of a string, starting with the
 * first character followed by \n
 * @str: character to be printed
 *
 * Return: Void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);

		str = str + 2;


	}

printf("\n");
}
