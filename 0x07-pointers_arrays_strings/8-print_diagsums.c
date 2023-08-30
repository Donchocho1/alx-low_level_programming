#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of int
 * @a: pointer to the 2D array
 * @size: size of the 2D array memory allocation
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{

	int i;
	int left_diagonal = 0;
	int right_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		left_diagonal += a[i * size + i];
		right_diagonal = right_diagonal + a[i * size + (size - i - 1)];

	}
	printf("%d, %d\n", left_diagonal, right_diagonal);

}
