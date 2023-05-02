#include "lists.h"

/**
 * print_listint - prints all the elements of the listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
