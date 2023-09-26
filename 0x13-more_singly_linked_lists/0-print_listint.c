#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a pointer to a single linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t counter = 0;

	current = h;
	while (current != NULL)
	{

		printf("%d\n", current->n);
		counter++;
		current = current->next;
	}
return (counter);
}
