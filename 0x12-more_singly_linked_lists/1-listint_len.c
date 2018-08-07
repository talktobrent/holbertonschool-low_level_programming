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
	const listint_t *mover;

	mover = NULL;
	count = 0;

	mover = h;

	while (mover != NULL)
	{
		count++;
		mover = mover->next;
	}

	return (count);
}
