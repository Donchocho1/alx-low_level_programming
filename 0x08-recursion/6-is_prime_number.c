#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input
 *  integer is a prime number, otherwise return 0
 *  @n: int that will be checked
 *
 *  Return: 1 if n is a prime number else 0
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
	{
		return (0);
	}
	else if (n % 9 == 0 || n % 7 == 0)
	{
		return (0);
	}

	return (1);
}
