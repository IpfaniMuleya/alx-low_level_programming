#include "lists.h"

/**
 * delete_nodeint_at_index - delets the node at an index of the linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to be deleted, index starts at 0
 *
 * Return: 1 on success, or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now, *prev;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		now = *head;
		*head = (*head)->next;
		free(now);
		return (1);
	}

	prev = *head;
	now = prev->next;
	for (i = 1; (now != NULL) && (i <= index); i++)
	{
		if (i == index)
		{
			prev->next = now->next;
			free(now);
			return (1);
		}
		prev = now;
		now = now->next;
	}
	return (-1);
}
