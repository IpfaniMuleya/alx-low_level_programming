#include "lists.h"

/**
 * sum_listint - gets the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now = head;

	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}

	return (sum);
}
