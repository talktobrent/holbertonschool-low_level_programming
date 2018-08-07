#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at any location in linked list
  * @head: pointer to top of list
  * @index: location at index to delete (index begins at 0)
  * Return: 1 if success, -1 if fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *mover, *last;
	unsigned int count;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	mover = *head;

	while (count < index)
	{
		if (mover->next == NULL)
			return (-1);
		last = mover;
		mover = mover->next;
		count++;
	}

	last->next = mover->next;
	free(mover);

	return (1);
}
