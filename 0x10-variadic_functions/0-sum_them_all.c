#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a variadic funct that returns the sum of all its
 * parameters
 * @n: int parameter for argument count
 *
 * Return: pointer to the first int argument
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(op, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(op, const unsigned int);
	}

	va_end(op);
	return (sum);

}
