#include "lists.h"

/**
 * print_dlistint - prints value at all nodes of a linked list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *run;
	size_t count = 0;

	run = h;

	while (run != NULL)
	{
		printf("%d\n", run->n);
		count++;
		run = run->next;
		if (run == h)
			break;
	}

	return (count);
}
