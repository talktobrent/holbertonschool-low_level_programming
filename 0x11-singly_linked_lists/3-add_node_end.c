#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - adds a node to the end of a linked list
  * @head: pointer to start of linked list
  * @str: string to be put into new node
  * Return: pointer to new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mover, *newnode;
	int length;

	length = 0;

	while (str[length] != 0 && str != NULL)
		length++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;

	if ((*head) != NULL)
	{

		mover = *head;
		while (mover->next != NULL)
			mover = mover->next;

		mover->next = newnode;
	}
	else
		(*head) = newnode;

	return (newnode);


}
