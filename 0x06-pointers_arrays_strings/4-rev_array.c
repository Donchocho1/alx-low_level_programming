#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of an arr of int
 * @a: pointer to array
 * @n: size of the arr
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int start, end, temp;
start = 0;
end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	start++;
	end--;
	}

}
