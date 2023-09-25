#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: Double pointer that points to the head/beginning of the node
 * @str: a const string to be copied
 *
 * Return: the address of the new element
 * OR NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_element = malloc(sizeof(list_t));

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	new_element->len = strlen(str);
	new_element->next = (*head);
	(*head) = new_element;

return (new_element);
}
