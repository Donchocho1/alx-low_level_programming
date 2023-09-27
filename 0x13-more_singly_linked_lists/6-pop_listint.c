#include "lists.h"

/**
 * pop_listint - a function that deletes the head node(first node)
 * of a listint_t
 * @head: the single linked list
 *
 * Return: the head node data(first data(int n));
 */

int pop_listint(listint_t **head)
{
	int n = -1;
	listint_t *next_node = NULL;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;

	return (n);
}
