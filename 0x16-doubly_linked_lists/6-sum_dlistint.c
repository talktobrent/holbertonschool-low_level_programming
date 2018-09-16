#include "lists.h"

/**
 * sum_dlistint - sums all n values in a linked list
 * @head: head of linked list
 * Return: sum of all n values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
