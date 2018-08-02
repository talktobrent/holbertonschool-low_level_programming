#include <stdio.h>
#include "lists.h"

/**
  * list_len - counts nodes in a linked list
  * @h: pointer to start of linked list
  * Return: number of nodes iterated
  */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
