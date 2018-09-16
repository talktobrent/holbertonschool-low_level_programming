#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: head of linked list
 */


void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		if (head->prev != NULL)
			free(head->prev);
		head = head->next;
	}

	if (head->prev != NULL)
		free(head->prev);

	free(head);
}

