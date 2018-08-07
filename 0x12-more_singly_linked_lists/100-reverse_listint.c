#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to top of list
  * Return: new head location
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *last;

	forward = NULL;
	last = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = forward;
	}

	(*head)->next = last;
	return (*head);
}
