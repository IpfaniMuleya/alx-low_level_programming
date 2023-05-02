#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list afely
 * @h: double pointer to the head of the linked list
 *
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (!h || !(*h))
	{
		return (size);
	}

	while (*h)
	{
		size++;
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	*h = NULL;
	return (size);
}
