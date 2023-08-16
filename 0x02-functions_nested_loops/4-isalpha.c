#include "main.h"
/**
 * _isalpha - checks if a lowercase character or uppercase character
 * @c: the character that will be checked
 *
 * Return: 1 if c is lowercase or Uppercase
 * otherwise, 0 is returned
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);

	}
	else
		return (0);

}
