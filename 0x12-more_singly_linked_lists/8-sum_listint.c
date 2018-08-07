#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - adds all data from 'n' a in lintint_t linked list
  * @head: pointer to top of list
  * Return: sum of all 'n' in the entire linked list, 0 if list empty
  */

int sum_listint(listint_t *head)
{
	listint_t *mover;
	int sum;

	sum = 0;
	mover = NULL;
	mover = head;

	while (mover != NULL)
	{
		sum = sum + mover->n;
		mover = mover->next;
	}

	return (sum);


}
