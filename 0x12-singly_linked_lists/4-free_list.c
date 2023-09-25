#include "lists.h"

/**
 * free_list - a function that frees a list_list list
 * @head: a single linked list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}

}
