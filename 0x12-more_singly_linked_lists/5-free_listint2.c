#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: pointer to top of list
  * Description: frees list, then sets 'head' to NULL
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *mover;

	tmp = NULL;

	if (head == NULL)
		return;

	mover = *head;

	while (mover != NULL)
	{
		tmp = mover;
		mover = mover->next;
		free(tmp);
	}

	*head = NULL;



}
