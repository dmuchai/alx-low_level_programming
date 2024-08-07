#include "lists.h"
#include <stdio.h>

/**
 * listint_len -returns the number of elements in linked listint_t list.
 * @h: pointer to the head of linked list.
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}
