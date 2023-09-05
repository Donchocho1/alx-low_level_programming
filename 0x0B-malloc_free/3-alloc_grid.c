#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: colunm of the array
 * @height: row of the array
 *
 * Return: Int pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
return (matrix);
}
