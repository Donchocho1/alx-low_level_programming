#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: Double pointer that points to the head/beginning of the node
 * @str: a const string to be copied
 *
 * Return: the address of the new element
 * OR NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_element, *last;

	if (str == NULL)
	{
		return (NULL);
	}

	if (strdup(str) == NULL)
		return (NULL);


	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	new_element->len = strlen(str);
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_element;

return (new_element);
}
