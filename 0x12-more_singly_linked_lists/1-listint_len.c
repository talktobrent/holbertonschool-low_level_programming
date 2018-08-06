#include <stdio.h>
#include "lists.h"

/**
  * listint_len - counts number of nodes in a listint_t linked list
  * @h: pointer to top of list
  * Return: number of nodes in list
  */

size_t listint_len(const listint_t *h)
{
	size_t count;
	listint_t *mover;

	mover = NULL;
	count = 0;

	if (h != NULL)
		count++;
		mover = h->next;

	while (mover != h && mover != NULL)
	{
		count++;
		mover = mover->next;
	}

	return (count);
}
