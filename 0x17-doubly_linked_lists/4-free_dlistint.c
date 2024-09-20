#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_ptr;

	while (head != NULL) {
		temp_ptr = head;
		head = head->next;
		free(temp_ptr);
	}
}
