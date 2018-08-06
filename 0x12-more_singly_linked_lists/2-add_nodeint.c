#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - adds new node to beginning of a listint_t linked list
  * @head: pointer to top of list
  * @n: value for element 'n' in new node
  * Return: pointer to new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);


}
