#include "lists.h"


/**
 * insert_nodeint_at_index - a function that inserts a new node at the
 * a given index
 * @head: Single linked list
 * @idx: index position
 * @n: Int to be added
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int size = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		size++;
	}
	else
	{
		temp = *head;
		while (temp != NULL && size < idx - 1)
		{
			temp = temp->next;
			size++;
		}

		if (temp == NULL || size < idx - 1)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = temp->next;
		temp->next = new_node;
		size++;
	}
return (new_node);
}
