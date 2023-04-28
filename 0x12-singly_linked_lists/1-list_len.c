#include "lists.h"

/**
 * list_len - gives the number of elements in a list
 * @h: pointer to head of the list_t list
 *
 * Return: number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
