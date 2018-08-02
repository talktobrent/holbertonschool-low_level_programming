#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints every element of nodes in a linked list
  * @h: pointer to start of linked list
  * Return: number of nodes iterated
  */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
