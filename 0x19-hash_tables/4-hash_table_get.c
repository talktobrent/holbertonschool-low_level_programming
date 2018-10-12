#include "hash_tables.h"

/**
 * hash_table_get - gets a value at a key in hash table
 * @ht: hash tbale given
 * @key: key given (string)
 * Return: value at key (string)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *run;

	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	run = ht->array[index];
	while (run != NULL && strcmp(run->key, key) != 0)
		run = run->next;

	if (run == NULL)
		return (NULL);

	return (run->value);
}

