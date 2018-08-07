#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all elements of a listint_t linked list
  * @h: pointer to top of list
  * Return: number of nodes in list
  */

size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *mover;

	mover = NULL;
	count = 0;

	while (mover != NULL)
	{
		printf("%i\n", mover->n);
		count++;
		mover = mover->next;
	}

	return (count);
}
