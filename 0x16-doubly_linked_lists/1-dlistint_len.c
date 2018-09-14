#include "lists.h"

/**
 * dlistint_len - prints number of nodes in a linked list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *run;
	size_t count = 0;

	run = h;

	while (run != NULL)
	{
		count++;
		run = run->next;
		if (run == h)
			break;
	}

	return (count);
}
