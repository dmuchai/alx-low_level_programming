#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node a linked list
 * @head :pointer to pointer to the head of the linked list
 * Return: head node's data (nd) or 0 - if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_var;
	int n;

	tmp_var = *head;

	if (tmp_var == NULL)
		return (0);

	*head = tmp_var->next;
	n = tmp_var->n;
	free(tmp_var);

	return (n);
}
