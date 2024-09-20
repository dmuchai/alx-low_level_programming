#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: data for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node1, *last_node;
	
	new_node1 = malloc(sizeof(dlistint_t));
	if (new_node1 == NULL)
		return (NULL);

	new_node1->n = n;
	new_node1->next = NULL;
	
	if (*head == NULL)
	{
		new_node1->prev = NULL;
		*head = new_node1;
		return (new_node1);
	}
	
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node1;
	new_node1->prev = last_node;

	return (new_node1);
}
