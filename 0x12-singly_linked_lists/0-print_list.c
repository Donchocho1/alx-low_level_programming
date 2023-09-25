#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to a single linked list
 *
 * Return: number of count
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
			printf("[%u] %s\n", current->len, current->str);

		counter++;
		current = current->next;
	}
	return (counter);
}
