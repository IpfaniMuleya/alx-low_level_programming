#include "lists.h"

/**
 * add_node - Adds a new node at the degining of the list_t list
 * @head: pointer to a pointer to the heaad of the list_t list
 * @str: The string to be added
 *
 * Return: address of the new node, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if ((head == NULL) || (str == NULL))
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
