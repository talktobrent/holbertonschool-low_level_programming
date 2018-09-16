#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a linked list
 * @head: head of linked list
 * @n: n value for new node
 * Return: pointer to new node, NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
