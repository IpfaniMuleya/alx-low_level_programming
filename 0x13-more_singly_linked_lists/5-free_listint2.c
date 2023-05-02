#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *now;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		now = *head;
		*head = (*head)->next;
		free(now);
	}

	*head = NULL;
}
