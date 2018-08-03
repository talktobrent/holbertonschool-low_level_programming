#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a list_t
  * @head: pointer to start of linked list
  */

void free_list(list_t *head)
{
	list_t *tmp;

		while (head != NULL)
		{
			tmp = head;
			free(head->str);
			head = head->next;
			free(tmp);
		}
}
