#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node in linked list at index
 * @h: head of linked list
 * @idx: index given
 * @n: value for n in new node
 * Return: address of new node, NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *run;

	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}

	if (*h == NULL)
		return (NULL);

	run = *h;

	while (idx != 0 && run != NULL)
	{
		run = run->next;
		idx--;
	}

	if (run == NULL)
	{
		if (idx == 0)
		{
			newnode = add_dnodeint_end(h, n);
			return (newnode);
		}
		else
			return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = run->prev;
	newnode->next = run;

	run->prev->next = newnode;
	run->prev = newnode;

	return (newnode);
}
