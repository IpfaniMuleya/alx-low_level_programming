#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: pointe to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *now;

	while (head != NULL)
	{
		now = head;
		head = head->next;
		free(now);
	}
}
