#include "3-calc.h"

/**
 * op_add - add two int
 * @a: First int
 * @b: Second int
 *
 * Return: Some of both int
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtrats two int
 * @a: first int
 * @b: second int
 *
 * Return: Diff between both int
 */
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;
	return (dif);
}

/**
 * op_mul - mulitiply two ints
 * @a: First int
 * @b: second int
 *
 * Return: product of a and b;
 */

int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);

}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 *
 * Return: results of a and b;
 */
int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}

/**
 * op_mod - provides remainder after dividng two ints
 * @a: first int
 * @b: second int
 *
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
