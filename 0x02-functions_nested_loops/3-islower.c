#include "main.h"
/**
 * _islower - checks for a lowercase character
 * @c: the character that will be checked
 *
 * Return: 1 if c is lowercase
 * otherwise, 0 is returned
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else
		return (0);

}
