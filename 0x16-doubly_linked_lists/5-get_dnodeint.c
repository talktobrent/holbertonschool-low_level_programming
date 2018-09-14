#include "lists.h"

/**
 * get_dnodeint_at_index - returns node of linked list at index given
 * @head: head of linked list
 * @index: index given
 * Return: pointer to indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (index >= 1 && head != NULL)
	{
		head = head->next;
		index--;
	}

	return (head);
}


