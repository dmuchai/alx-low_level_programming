#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a singly linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * Make sure there is no memory leaks.
 * The function sets the head to NULL.
 *
 * Return: No return.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_var;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp_var =  *head;
		*head = (*head)->next;
		free(tmp_var);
	}
}
