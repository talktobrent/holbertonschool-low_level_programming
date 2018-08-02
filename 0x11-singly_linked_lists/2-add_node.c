#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a node to the beginning of a linked list
  * @head: pointer to start of linked list
  * @str: string to be put into new node
  * Return: pointer to new node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t length;

	length = 0;
	newnode = NULL;

	length = 0;
	while (str[length] != 0 && str != NULL)
		length++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = *head;

	*head = newnode;

	return (newnode);


}
