#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - adds new node to end of a listint_t linked list
  * @head: pointer to top of list
  * @n: value for element 'n' in new node
  * Return: pointer to new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *mover;

	newnode = NULL;
	mover = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (mover->next != NULL)
		mover = mover->next;

	mover->next = newnode;

	return (newnode);


}
