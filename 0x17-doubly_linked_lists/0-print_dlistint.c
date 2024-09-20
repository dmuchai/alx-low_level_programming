#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	/* Traverse the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);  /* Print the data of the current node */
		h = h->next;           /* Move to the next node */
		node_count++;          /* Increment the node count */
	}

	return (node_count);
}
