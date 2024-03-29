#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data(n)
 * of a listint_t linked list
 * @head: the pointer to a linked list
 *
 * Return: sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;


	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
return (sum);
}
