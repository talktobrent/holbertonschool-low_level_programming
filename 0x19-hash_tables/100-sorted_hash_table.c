#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size to build
 * Return: pointer to new hash table, NULL if fail
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtable;

	if (size == 0)
		return (NULL);

	hashtable = malloc(sizeof(shash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->array = calloc(size, sizeof(void *));
	if (hashtable->array == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->shead = NULL;
	hashtable->stail = NULL;
	return (hashtable);
}

/**
 * shash_table_set - adds node to sorted hash table
 * @ht: sorted hash table to use
 * @key: key given (string)
 * @value: value associated with key
 * Return: 1 if success, 0 if failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int test;

	if (ht == NULL || key == NULL || key[0] == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		test = scollide(ht->array[index], key, value);
		if (test != -1)
			return (test);
	}
	return (snewnode(&ht, index, key, value));
}
/**
 * snewnode - adds a new node at a index
 * @ht: sorted hash table to use
 * @index: index in sorted hash table array
 * @key: new key
 * @value: new value
 * Return: 1 on success, 0 if failure
 */

int snewnode(shash_table_t **ht, unsigned long int index, const char *key,
		const char *value)
{
	shash_node_t *node, *run;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = (*ht)->array[index];
	(*ht)->array[index] = node;

	if ((*ht)->shead == NULL)
	{
		(*ht)->shead = node;
		(*ht)->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
	}
	else if (key[0] > (*ht)->stail->key[0])
	{
		(*ht)->stail->snext = node;
		node->sprev = (*ht)->stail;
		(*ht)->stail = node;
		node->snext = NULL;
	}
	else if (key[0] < (*ht)->shead->key[0])
	{
		(*ht)->shead->sprev = node;
		node->snext = (*ht)->shead;
		node->sprev = NULL;
		(*ht)->shead = node;
	}
	else
	{
		run = (*ht)->shead;
		while (key[0] > run->snext->key[0])
			run = run->snext;

		node->snext = run->snext;
		run->snext->sprev = node;
		run->snext = node;
		node->sprev = run;
	}
	return (1);
}

/**
 * scollide - looks for duplicate key entry
 * @run: head of linked list
 * @key: key given
 * @value: value given
 * Return: 0 if malloc fail, 1 if duplicate found, -1 if no duplicate
 */

int scollide(shash_node_t *run, const char *key, const char *value)
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

/**
 * shash_table_get - gets a value at a key in sorted hash table
 * @ht: sorted hash tbale given
 * @key: key given (string)
 * Return: value at key (string)
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL || ht->shead == NULL)
		return (NULL);

	shash_node_t *run = ht->shead;

	while (strcmp(key, run->key) != 0)
		run = run->next;

	if (run != NULL)
		return (run->key);

	return (NULL);
}
/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table given
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *run = ht->shead;

	printf("{");
	while (run != NULL)
	{
		printf("'%s': '%s'", run->key, run->value);
		run = run->snext;
		if (run != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print - prints a sorted hash table in reverse
 * @ht: sorted hash table given
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *run = ht->stail;

	printf("{");
	while (run != NULL)
	{
		printf("'%s': '%s'", run->key, run->value);
		run = run->sprev;
		if (run != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table given
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *run = ht->stail;

	while (run != ht->shead)
	{
		free(run->key);
		free(run->value);
		run = run->sprev;
		free(run->snext);
	}

	free(run->value);
	free(run->key);
	free(run);

	free(ht->array);
	free(ht);
}

