#include "lists.h"

/**
 * list_len - a function that returns the number of elements of a list_t list
 * @h: a pointer to a single linked list
 *
 * Return: number of count
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
