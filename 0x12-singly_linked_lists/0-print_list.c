#include "lists.h"

/**
 * print_list - prints all elements of the list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: number of nodes in the list_t list
 */

size_t print_list(const list_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
