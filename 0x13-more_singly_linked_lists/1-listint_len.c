#include "lists.h"

/**
 * listint_len - gives the number of elements in the linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
