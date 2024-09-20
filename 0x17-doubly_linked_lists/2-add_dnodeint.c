#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: data of the new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node1;

	new_node1 = malloc(sizeof(dlistint_t));
	if (new_node1 == NULL)
		return (NULL);

	new_node1->n = n;
	new_node1->prev = NULL;
	new_node1->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node1;

	*head = new_node1;

	return (new_node1);
}
