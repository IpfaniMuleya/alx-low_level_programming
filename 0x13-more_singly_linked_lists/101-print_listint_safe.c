#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slower = head, *faster = head;
	size_t counter = 0;

	if (head == NULL)
	{
		exit(98);
	}

	while ((slower != NULL) && (faster != NULL) && (faster->next != NULL))
	{
		printf("[%p] %d\n", (void *)slower, slower->n);
		counter++;

		slower = slower->next;
		faster = faster->next->next;

		if (slower == faster)
		{
			printf("-> [%p] %d\n", (void *)slower, slower->n);
			counter++;
			break;
		}
	}

	if ((faster == NULL) || (faster->next == NULL))
	{
		while (slower != NULL)
		{
			printf("[%p] %d\n", (void *)slower, slower->n);
			counter++;
			slower = slower->next;
		}
	}

	return (counter);
}
