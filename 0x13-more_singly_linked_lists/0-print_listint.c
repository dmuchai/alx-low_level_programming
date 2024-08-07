#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of linked list.
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}
