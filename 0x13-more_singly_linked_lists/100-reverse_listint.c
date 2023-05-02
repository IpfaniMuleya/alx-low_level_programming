#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to the head of the linked list
 *
 * Return: pointer to the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *now = *head, *next = NULL;

	while (now != NULL)
	{
		next = now->next;
		now->next = prev;
		prev = now;
		now = next;
	}

	*head = prev;
	return (*head);
}
