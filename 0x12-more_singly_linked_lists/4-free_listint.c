#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - frees a listint_t list
  * @head: pointer to top of list
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}





}
