#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head of linked list
 * @index: index given
 * Return: 1 on success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *run;

	if (*head == NULL)
		return (-1);

	run = *head;

	if (index == 0)
		*head = run->next;

	else
	{
		while (index > 0 && run != NULL)
		{
			run = run->next;
			index--;
		}

		if (run == NULL)
			return (-1);

		run->prev->next = run->next;
	}

	if (run->next != NULL)
		run->next->prev = run->prev;

	free(run);

	return (1);
}
