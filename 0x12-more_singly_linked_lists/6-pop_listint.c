#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes head node of a listint_t list
  * @head: pointer to top of list
  * Return: data from deleted node (int n)
  */

int pop_listint(listint_t **head)
{
	listint_t *mover, *tmp;
	int data;

	if (*head == NULL)
		return (0);

	mover = *head;

	tmp = mover->next;
	data = mover->n;

	free(mover);

	*head = tmp;

	return (data);


}
