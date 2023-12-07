#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *new_node, *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && counter < idx - 1)
	{
		current = current->next;
		counter++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
