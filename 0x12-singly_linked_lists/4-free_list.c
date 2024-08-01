#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees list_t list.
 * @head: pointer to list_t list.
 *
 * Return: no return.
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (head != NULL)

	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
