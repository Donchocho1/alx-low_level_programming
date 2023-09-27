#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index of a
 * listint_t linked list.
 * @head: single linked list
 * @index: position to be deleted
 *
 * Return: 1 if it succeds else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *del;
	unsigned int i;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (temp->next == NULL)
			{
				return (-1);
			}
			temp = temp->next;
		}

		del = temp->next;

		if (del == NULL)
		{
			return (-1);
		}

		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
	}
return (1);
}
