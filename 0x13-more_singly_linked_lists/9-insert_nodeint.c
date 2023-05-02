#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: integer for the new node to contain
 *
 * Return: If memory allocation fails or head is NULL, return NULL
 * Otherwise, return the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int node_idx = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = *head;

	while (node_idx < (idx - 1))
	{
		if ((prev_node == NULL) || (prev_node->next == NULL))
		{
			free(new_node);
			return (NULL);
		}
		prev_node = prev_node->next;
		node_idx++;
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
