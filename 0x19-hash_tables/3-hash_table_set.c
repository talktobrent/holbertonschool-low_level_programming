#include "hash_tables.h"

/**
 * hash_table_set - adds node to hash table
 * @ht: hash table to use
 * @key: key given (string)
 * @value: value associated with key
 * Return: 1 if success, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int test = 0;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		test = collide(ht->array[index], key, value);
		if (test != -1)
			return (test);
	}

	return (newnode(&ht->array[index], key, value));
}

/**
 * newnode - adds a new node at a index
 * @index: index in hash table array
 * @key: new key
 * @value: new value
 * Return: 1 on success, 0 if failure
 */

int newnode(hash_node_t **index, const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->next = *index;

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new->value);
		free(new);
		return (0);
	}

	*index = new;
	return (1);
}

/**
 * collide - looks for duplicate key entry
 * @run: head of linked list
 * @key: key given
 * @value: value given
 * Return: 0 if malloc fail, 1 if duplicate found, -1 if no duplicate
 */

int collide(hash_node_t *run, const char *key, const char *value)
{
	char *temp = NULL;

	while (run != NULL)
	{
		if (strcmp(run->key, key) == 0)
		{
			if (strcmp(run->value, value) != 0)
			{
				temp = strdup(value);
				if (temp == NULL)
					return (0);
				free(run->value);
				run->value = temp;
				return (1);
			}
			else
			{
				return (1);
			}
		}
		run = run->next;
	}
	return (-1);
}
