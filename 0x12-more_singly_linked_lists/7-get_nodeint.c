#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - finds desired node in a listint_t linked list
  * @head: pointer to top of list
  * @index: node in linked list to find (index starts as 0)
  * Return: pointer to found node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *mover;

	count = 0;

	mover = head;

	while (count < index)
	{
		if (mover->next == NULL)
			return (NULL);
		mover = mover->next;
		count++;
	}

	return (mover);
}
