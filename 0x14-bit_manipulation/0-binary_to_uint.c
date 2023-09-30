#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: pointer to char to be converted
 *
 * Return: the converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int decimal = 0;
	unsigned int i;
	char digit;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		digit = b[i];

		if (digit == '0')
		{
			decimal = (decimal << 1);
		}
		else if (digit == '1')
		{
			decimal = (decimal << 1) | 1;
		}
		else
			return (0);
	}
return (decimal);
}
