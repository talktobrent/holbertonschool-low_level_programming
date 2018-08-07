#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts node at any location in linked list
  * @head: pointer to top of list
  * @idx: location at index to insert (index begins at 0)
  * @n: 'n' value for newly inserted listint_t node
  * Return: pointer to new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *mover, *newnode, *last, *tmp;

	count = 0;
	mover = NULL;
	newnode = NULL;
	tmp = NULL;
	last = NULL;

	if (head == NULL)
		return (NULL);

	mover = *head;


	/* finds location to insert new node */
	while (count < idx)
	{
		if (mover->next == NULL && count < idx - 1)
			return (NULL);

		/* holds last location */
		last = mover;

		mover = mover->next;
		count++;
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	/* if anything other than node zero given */
	if (count > 0)
	{
	/* holding existing next value */
	tmp = last->next;

	/* pointing last to newnode */
	last->next = newnode;
	}

	/* if node zero given */
	else
	{
		tmp = *head;
		newnode->next = tmp;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}

	/* inserting values for newnode */
	newnode->n = n;
	newnode->next = tmp;

	return (newnode);
}
