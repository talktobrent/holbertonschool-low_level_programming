#include "hash_tables.h"

/**
 * hash_table_create - creates an array for a hash table
 * @size: size of array to build
 * Return: pointer to newly created hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	return (new);
}
