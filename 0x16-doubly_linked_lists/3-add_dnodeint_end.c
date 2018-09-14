#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of linked list
 * @head: head of linked list
 * @n: n value for new node
 * Return: pointer to newnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *run, *newnode;

	run = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		while (run->next != NULL)
			run = run->next;

		run->next = newnode;
		newnode->prev = run;
	}

	newnode->next = NULL;
	newnode->n = n;

	return (newnode);
}
